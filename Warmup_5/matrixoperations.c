#include <stdio.h>

#define ROWS2 
#define COLS2

void addMatrices(int a[ROWS][COLS], int b[ROWS][COLS], int sum[ROWS][COLS]) {
    for (int i=0; i<ROWS; i++) {
        for (int j=0; j<COLS; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }
}

void multiplyMatrices(int a[ROWS][COLS], int b[ROWS][COLS], int product) {
    for (int i=0; i<ROWS; i++) {
        for (int j=0; j<COLS; j++) {
            product[i][j]=0;
            for (int k=0; k<COLS; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i=0; i<ROWS; i++) {
        for (int j=0; j<COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n")
    }
}

int main() {
    int matrix1[ROWS][COLS] = {{1,2}, {3,4}};
    int matrix2[ROWS][COLS] = {{5,6}, {7,8}};
    int sum[ROWS][COLS];
    int product[ROWS][COLS];

    addMatrices(matrix1, matrix2, sum);
    multiplyMatrices(matrix1, matrix2, product);

    printf("Matrix Addition:\n");
    printMatrix(sum);
    printf("Matrix multiplication:\n");
    printMatrix(product);

    return 0;
}

