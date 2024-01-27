#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[] = "example.txt";
    char line[256];
    FILE *fp = fopen(filename, "w");
    
    fprintf(fp, "Hello, World!\n");
    fclose(fp);

    fp=fopen(filename, "r");
    while(fgets(line, sizeof(line), fp)) {
        printf("%s", line);
    }
    fclose(fp);

    return 0;
}