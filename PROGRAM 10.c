/*
 10. Write a program to find the transpose of a matrix
 @ Rosha_Thankachan
 Completed on : 26/07/2025
*/

#include <stdio.h>

int a[10][10], b[10][10];  // Matrix A and its transpose B
int i, j, m, n;            


void readA() {            //Function to read Matrix
    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);  
        }
    }

   
    printf("\nMatrix A:\n");           // Display the entered matrix
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}


void transp() {           //Function to find transpose
    for(i = 0; i < m; i++) {
        for(j = 0; j < n; j++) {
            b[j][i] = a[i][j];  // Transposing and storing to Matrix b
        }
    }
    
    
    printf("\nTRANSPOSED MATRIX:\n");   // Display the transposed matrix
    for(i = 0; i < n; i++) {        
        for(j = 0; j < m; j++) {    
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
}


int main() {
    printf("TRANSPOSE MATRIX\n");
    printf("----------------\n");

    
    printf("Enter the order of Matrix A : ");
    scanf("%d%d", &m, &n);

    readA();    // Read matrix
    transp();   //Transpose Function call

    return 0;
}

