#include <stdio.h>

int main() {
    int numbers[]={1,2,3,4,5};
    int sum = 0;

    int arrlength = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i<arrlength; i++) {
        sum = sum + numbers[i];
    }

    double average = sum/arrlength;

    printf("Sum: %d\n", sum);
    printf("Average: %f\n", average);

    return 0;
}