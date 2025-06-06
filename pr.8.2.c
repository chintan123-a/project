#include <stdio.h>

void findCubes(int *arr, int size) {
    for (int i = 0; i < size * size; i++) {
        printf("%d\t", (*(arr + i)) * (*(arr + i)) * (*(arr + i)));
        if ((i + 1) % size == 0)
            printf("\n");
    }
}

int main() {
    int size;
    printf("Enter array's size: ");
    scanf("%d", &size);

    int arr[size][size];

    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Cubes of all elements:\n");
    findCubes(&arr[0][0], size);

    return 0;
}
/*
input:Enter array's size:2
a[0][0]=3
a[0][1]=2
a[1][0]=5
a[1][1]=4

output:Cubes of all elements:27 8
                            125 64
*/