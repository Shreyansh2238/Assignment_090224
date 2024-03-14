#include <stdio.h>

void transpose(int mat[][3], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = i + 1; j < cols; j++) {
            int temp = mat[i][j];
            mat[i][j] = mat[j][i];
            mat[j][i] = temp;
        }
    }
}

void displayMatrix(int mat[][3], int rows, int cols) {
    int i, j;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int i, j;
    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("\nOriginal Matrix:\n");
    displayMatrix(matrix, rows, cols);

    transpose(matrix, rows, cols);

    printf("\nTranspose Matrix:\n");
    displayMatrix(matrix, cols, rows);

    return 0;
}
