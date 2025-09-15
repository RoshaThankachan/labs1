/*
 8. Write a program to perform the addition of two matrices and subtraction of one matrix from another
 @ Rosha_Thankachan
 Completed on : 25/07/2025
*/

#include<stdio.h>

// Declaration of global matrices and variables
int a[10][10], b[10][10], c[10][10], d[10][10];
int i, j, m, n, p, q;

void readA() {									// Function to read Matrix A
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);  
        }
    }
}

		
void readB() {									// Function to read Matrix B
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);  
        }
    }
}

	
void add() {									// Function to add matrices A and B
    if(m == p && n == q) {  					// Check if matrix dimensions match
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                c[i][j] = a[i][j] + b[i][j];  
            }
        }

    
        printf("\nAdded Matrix:\n");			// Display the resulting matrix after addition
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Addition not possible (dimension mismatch).\n");
    }
}


void sub() {									// Function to subtract matrix B from matrix A
    if(m == p && n == q) { 						 // Check if matrix dimensions match
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                d[i][j] = a[i][j] - b[i][j];  
            }
        }

        printf("\nSubtracted Matrix:\n");		// Display the resulting matrix after subtraction
        for(i = 0; i < m; i++) {
            for(j = 0; j < n; j++) {
                printf("%d\t", d[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Subtraction not possible (dimension mismatch).\n");
    }
}

int main() {
  
    printf("\nMATRIX : ADDITION AND SUBSTRACTION\n");
	printf("----------------------------------\n");
    
    printf("Enter the order of Matrix A: ");
    scanf("%d%d", &m, &n);
    printf("Enter the order of Matrix B: ");
    scanf("%d%d", &p, &q);

    // Read matrices
    readA();
    readB();

    // Perform and display addition and subtraction
    add();
    sub();

    return 0;
}

