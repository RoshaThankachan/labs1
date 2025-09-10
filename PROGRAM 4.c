/*
 Search all the occurences of an element in an integer array (positions) 
 @ Rosha_Thankachan
 Completed on : 25/07/2025 
 */

#include <stdio.h>

 // Global declarations
int a[10];       
int c = 0;                           				   // Counter for number of occurrences
int val, n;      

                                    
void read(int a[], int n) {           				 // Function to read elements into the array
    int i;
    printf("Enter the array elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}


void disp(int a[], int n) {							// Function to display the array
    int i;
    for (i = 0; i < n; i++) {
        printf("%d\t", a[i]);
    }
}


void occ(int a[], int n, int val) {					// Function to search and display all occurrences of a given value
    int i;
    for (i = 0; i < n; i++) {
        if (a[i] == val) {
            c++; 								 // Increment counter when match is found
            printf("Element found at position %d\n", i + 1); 
        }
    }
    printf("\nTotal number of occurrences of %d = %d\n", val, c);
}


int main() {
    printf("SEARCH OCCURRENCES\n");
    printf("\n-----------------\n");

    printf("Enter the limit: ");
    scanf("%d", &n);

    read(a, n); 												 // Read array elements

    printf("Entered array is: ");
    disp(a, n); 												 // Display array

    char choice;

    do {
        c = 0;  												// Reset counter for each new search
        printf("\nEnter the element to search: ");
        scanf("%d", &val);

       	occ(a, n, val);									      // Function to find occurrences
       

    	printf("\nDo you want to search another element? (y/n): ");			  // Ask user if they want to search again
        scanf(" %c", &choice); 

    } while (choice == 'y' || choice == 'Y');

    printf("\nProgram Ended.\n");

    return 0;
}

