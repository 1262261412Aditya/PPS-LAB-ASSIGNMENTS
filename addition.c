#include <stdio.h>

int main() {
    int mat1[3][3], mat2[3][3], sum[3][3];
    int i, j;



    // Step 1: Input elements for Matrix 1
    printf("\nEnter elements for Matrix A (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element A[%d][%d]: ", i, j);
            scanf("%d", &mat1[i][j]);
        }
    }

    // Step 2: Input elements for Matrix 2
    printf("\nEnter elements for Matrix B (3x3):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element B[%d][%d]: ", i, j);
            scanf("%d", &mat2[i][j]);
        }
    }

    // Step 3: Perform Matrix Addition
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            sum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Step 4: Display Matrices and Result in Tabular Format
    printf("\n--- Results ---\n");
    
    printf("\nMatrix A:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d \t", mat1[i][j]);
        }
        printf("\n");
    }

    printf("\nMatrix B:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d \t", mat2[i][j]);
        }
        printf("\n");
    }

    printf("\nResultant Matrix (A + B):\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d \t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
