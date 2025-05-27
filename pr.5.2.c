#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter the array's row size: ");
    scanf("%d", &rows);
    printf("Enter the array's column size: ");
    scanf("%d", &cols);

    int a[rows][cols];

    printf("Enter array's elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    int max = a[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d\n", max);
    scanf("\n
	")
    return 0;
}
/*
input = Enter the number of rows: 2
        Enter the number of columns: 3
        
        Enter elements of the 2*3 array:
        1 4 9
        5 3 8
        
output = the largest element in the array is: 9
*/