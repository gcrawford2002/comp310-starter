#include <stdio.h>
#include <stdlib.c>

int main(int argc, char *argv[]) {
    for (int i=1; i < argc; i++) {
        printf("i=%d argv[%d] = %s\n", i, i, argv[i]);
    }
}