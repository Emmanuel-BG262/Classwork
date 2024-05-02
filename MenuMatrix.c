#include <stdio.h>

void mtrxRead(int matrix[5][5], int row, int col);
void mtrxPrint(int matrix[5][5], int row, int col);
void mtrxAdd(int matrix1[5][5], int matrix2[5][5], int sumMatrix[5][5], int row, int col);
void mtrxTrans(int matrix[5][5], int transposeMatrix[5][5], int row, int col);
void mtrxMult(int matrix1[5][5], int matrix2[5][5], int productMatrix[5][5], int row1, int col1, int row2, int col2);

int main() {
    int matrix1[5][5], matrix2[5][5];
    int sumMatrix[5][5], transposeMatrix[5][5], multiplicationMatrix[5][5];
    int row1, row2, col1, col2, option;
    char cont;

    do {
        printf("\nChoose an option:\n");
        printf("1. Matrix Addition\n");
        printf("2. Matrix Transpose\n");
        printf("3. Matrix Multiplication\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);

        switch (option) {
            case 1:
                printf("Enter the number of rows and columns for matrix 1: ");
                scanf("%d%d", &row1, &col1);
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d%d", &row2, &col2);
                if (row1 == row2 && col1 == col2) {
                    printf("Enter elements for matrix 1:\n");
                    mtrxRead(matrix1, row1, col1);
                    printf("Enter elements for matrix 2:\n");
                    mtrxRead(matrix2, row2, col2);
                    mtrxAdd(matrix1, matrix2, sumMatrix, row1, col1);
                    printf("Matrix 1:\n");
                    mtrxPrint(matrix1, row1, col1);
                    printf("Matrix 2:\n");
                    mtrxPrint(matrix2, row2, col2);
                    printf("Addition of two matrices:\n");
                    mtrxPrint(sumMatrix, row1, col1);
                } else {
                    printf("Addition of two matrices not possible (dimensions must match).\n");
                }
                break;

            case 2:
                printf("Enter the number of rows and columns for the matrix: ");
                scanf("%d%d", &row1, &col1);
                printf("Enter elements for the matrix:\n");
                mtrxRead(matrix1, row1, col1);
                mtrxTrans(matrix1, transposeMatrix, row1, col1);
                printf("Original matrix:\n");
                mtrxPrint(matrix1, row1, col1);
                printf("Transposed matrix:\n");
                mtrxPrint(transposeMatrix, col1, row1);
                break;

            case 3:
                printf("Enter the number of rows and columns for matrix 1: ");
                scanf("%d%d", &row1, &col1);
                printf("Enter the number of rows and columns for matrix 2: ");
                scanf("%d%d", &row2, &col2);
                if (col1 == row2) {
                    printf("Enter elements for matrix 1:\n");
                    mtrxRead(matrix1, row1, col1);
                    printf("Enter elements for matrix 2:\n");
                    mtrxRead(matrix2, row2, col2);
                    mtrxMult(matrix1, matrix2, multiplicationMatrix, row1, col1, row2, col2);
                    printf("Matrix 1:\n");
                    mtrxPrint(matrix1, row1, col1);
                    printf("Matrix 2:\n");
                    mtrxPrint(matrix2, row2, col2);
                    printf("Multiplication result:\n");
                    mtrxPrint(multiplicationMatrix, row1, col2);
                } else {
                    printf("Multiplication not possible (columns of matrix 1 must match rows of matrix 2).\n");
                }
                break;

            case 4:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid option!\n");
        }

        printf("Do you want to continue? (y/n): ");
        scanf(" %c", &cont);

    } while (cont == 'y' || cont == 'Y');

    printf("Exiting...\n");
    return 0;
}

void mtrxRead(int matrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
}

void mtrxPrint(int matrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

void mtrxAdd(int matrix1[5][5], int matrix2[5][5], int sumMatrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void mtrxTrans(int matrix[5][5], int transposeMatrix[5][5], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }
}

void mtrxMult(int matrix1[5][5], int matrix2[5][5], int productMatrix[5][5], int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            productMatrix[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                productMatrix[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}
