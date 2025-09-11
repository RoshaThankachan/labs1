/*
 6. Display the array elements in the same order using a recursive function
 @ Rosha_Thankachan
 Completed on : 25/07/2025 
*/

#include<stdio.h>

int a[10]; // Global array 
int n;

void read( ) {                                         // Function to read 'n' elements into the array
    int i;
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);     
    }
}

                                                
void disp(int index) {   							// Recursive function to display array elements in the same order
    if(index == n)  
        return;
    printf("%d ", a[index]);  						// Print the current element
    disp(index + 1);    			     			// Recursive call 
}

int main() {
    
    printf("ARRAY ELEMENTS DISPLAY USING RECURSIVE FUNCTION\n");
    printf("-----------------------------------------------\n");
    
    printf("Enter the limit: ");
    scanf("%d", &n);
    read();                                       // Function call to read array elements
    printf("\nThe entered array elements are:\n");
    disp(0);                                     // Start displaying from index 0

    return 0;
}

