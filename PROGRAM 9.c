/*
 9.	Write a program to perform multiplication of two matrices
 @ Rosha_Thankachan
 Completed on : 26/07/2025
*/

#include <stdio.h>

// Global declarations
int a[10][10], b[10][10], c[10][10];  // Matrices A, B, and Result matrix C
int i, j, m, n, p, q, k;              


void readA() {                              // Function to read Matrix A
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);   
        }
    }
}


void readB() {                              // Function to read Matrix B
    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < p; i++) {
        for(j = 0; j < q; j++) {
            scanf("%d", &b[i][j]);  
        }
    }
}


void mul() {                          // Function to multiply two matrices
    if(n == p) {                      // Matrix multiplication is possible only if columns of A == rows of B
        for(i = 0; i < m; i++) {
            for(j = 0; j < q; j++) {
                c[i][j] = 0;
            }
        }

        for(i = 0; i < m; i++) {      // Matrix multiplication
            for(j = 0; j < q; j++) {
                for(k = 0; k < n; k++) {
                    c[i][j] += a[i][k] * b[k][j];  
                }
            }
        }

        printf("\nMultiplied Matrix (A x B):\n");       // Display the resulting matrix
        for(i = 0; i < m; i++) {
            for(j = 0; j < q; j++) {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    } else {
        printf("Multiplication not possible\n");
    }
}

int main() {

    printf("\nMATRIX MULTIPLICATION\n");
    printf("---------------------\n");

    
    printf("Enter the order of Matrix A : ");
    scanf("%d%d", &m, &n);
    printf("Enter the order of Matrix B : ");
    scanf("%d%d", &p, &q);

    readA();   // Read elements of matrice 1
    readB();   // Read elements of matrice 2
    mul();    // Multiplication function call

    return 0;
}

