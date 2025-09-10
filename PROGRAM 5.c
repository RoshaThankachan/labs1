/*
 5. Sort the array elements in ascending order (minimum three functions: read, disp and sort) 
 @ Rosha_Thankachan
 Completed on : 25/07/2025 
*/
#include <stdio.h>

int a[10];  // Global array 
int n;

void read() {                  // Function to read array elements
    int i;
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

void disp() {                  // Function to display array elements
    int i;
    for(i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
    printf("\n");  
}

                                          
void sort() {                  // Function to sort the array in ascending order
    int i, j, t;

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(a[i] > a[j]) { 
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("\nArray after sorting in ascending order:\n");
}

int main() {
	
    printf("ARRAY SORT\n");
    printf("----------\n");
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    read(a, n);															 // Read array elements
    printf("\nThe entered array elements are:\n");				         // Display original array
    disp();
    sort();																// Sort the array
    disp();																// Display sorted array

    return 0;
}

