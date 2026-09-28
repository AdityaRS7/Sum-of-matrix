
#include <stdio.h>

#define MAX 100

int main() {
    int rows, cols, i, j;
    int matrix1[MAX][MAX], matrix2[MAX][MAX], sum[MAX][MAX];

    printf("Enter the number of rows (1-%d): ", MAX);
    scanf("%d", &rows);
    printf("Enter the number of columns (1-%d): ", MAX);
    scanf("%d", &cols);


    printf("\nEnter elements of the 1st matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }


    printf("\nEnter elements of the 2nd matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }


    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }


    printf("\nSum of the two matrices:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");

    }
    return 0;
}
