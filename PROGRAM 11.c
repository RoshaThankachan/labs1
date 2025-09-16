/*
 11. Write a program to find the Determinant of a matrix (2x2 and 3x3)
 @ Rosha_Thankachan
 Completed on : 26/07/2025
*/

#include <stdio.h>

int matrix[3][3];  // Global matrix 
int order;         // Matrix order (either 2 or 3)


void read() {     // Function to read elements into the matrix
    printf("Enter the elements of %dx%d matrix:\n", order, order);
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            scanf("%d", &matrix[i][j]);  
        }
    }
}


void disp() {      // Function to display the matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < order; i++) {
        for (int j = 0; j < order; j++) {
            printf("%d\t", matrix[i][j]);  
        }
        printf("\n");
    }
}


int determinant() {  // Function to calculate determinant 
    
	int det = 0;

    if (order == 2) {  // Formula for 2x2 matrix: |A| = ad - bc
        det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);
    } 
    else if (order == 3) {
    	// Formula for 3x3 matrix:
        // |A| = a(ei - fh) - b(di - fg) + c(dh - eg)
        det = matrix[0][0] * (matrix[1][1]*matrix[2][2] - matrix[1][2]*matrix[2][1])
            - matrix[0][1] * (matrix[1][0]*matrix[2][2] - matrix[1][2]*matrix[2][0])
            + matrix[0][2] * (matrix[1][0]*matrix[2][1] - matrix[1][1]*matrix[2][0]);
    }

    return det;  // Return the determinant
}

int main() {
    printf("DETERMINANT OF A MATRIX (2x2 or 3x3 only)\n");
    printf("-----------------------------------------\n");

    
    printf("Enter the order of the matrix (2 or 3): ");
    scanf("%d", &order);

    
    if (order != 2 && order != 3) {
        printf("Invalid input! Only 2x2 and 3x3 are allowed.\n");
        return 1;  
    }

    read();       // Read the matrix
    disp();       // Display the matrix

    int det = determinant();     // Function to calculate determinant
    printf("\nDeterminant = %d\n", det);   // Display determinant

    return 0;
}

