#include <stdio.h>

int main() {
    int rows, cols, rowSum = 0, colSum = 0;
    int rowIndex, colIndex;

    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    // Input array elements
    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Ask user which row and column to sum
    printf("Enter the row index to find sum: ");
    scanf("%d", &rowIndex);
    printf("Enter the column index to find sum: ");
    scanf("%d", &colIndex);

    // Calculate row sum
    for (int j = 0; j < cols; j++) {
        rowSum += a[rowIndex][j];
    }

    // Calculate column sum
    for (int i = 0; i < rows; i++) {
        colSum += a[i][colIndex];
    }

    printf("Sum of elements in row %d = %d\n", rowIndex, rowSum);
    printf("Sum of elements in column %d = %d\n", colIndex, colSum);

    return 0;
}
/*
input = Enter the array's  row size:3
        Enter the array's column size:3
        
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
        
output = Enter row  number: 0
         Elements of row 0:1, 2, 3
         The sum of a row 0:6
         
         Enter column number: 1
         Elements of column 1:2, 5, 8
         The sum of a column 1:15
*/