#include <stdio.h>

int main() {
    int rows, cols;

    // Step 1: Get matrix dimensions from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array with maximum size 100x100
    int matrix[100][100];

    // Step 2: Input elements into the matrix
    printf("\nEnter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Step 3: Display the matrix in grid format
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d \t", matrix[i][j]); // '\t' provides a tab space for neat alignment
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
