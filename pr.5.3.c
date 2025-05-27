#include <stdio.h>

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int a[rows][cols], transpose[cols][rows];

    // Input elements
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Compute transpose
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = a[i][j];
        }
    }

    // Output original matrix
    printf("\nOriginal matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Output transposed matrix
    printf("\nTranspose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
/*
input = Enter the array's row & column size: 3

        Enter array's elements:
        
        a[0][0] = 1
        a[0][1] = 2
        a[0][2] = 3
        a[1][0] = 4
        a[1][1] = 5
        a[1][2] = 6
        a[2][0] = 7
        a[2][1] = 8
        a[2][2] = 9
        
output = the transpose matrix of an array:
         1 4 7
         2 6 8
         3 6 9
*/