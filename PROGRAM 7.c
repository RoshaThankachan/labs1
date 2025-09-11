/*
 7. Display the array elements in the reverse order using a recursive function
 @ Rosha_Thankachan
 Completed on : 25/07/2025 
*/

#include<stdio.h>

int a[10];  // Global array
int n;      

void read() {                                  // Function to read 'n' elements into the array
    int i;
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);  
    }
}


void disp(int index) {                        // Recursive function to display elements in reverse order
    if(index < 0) 
        return;
    printf("%d ", a[index]);  
    disp(index - 1);                        // Recursive call 
}

int main() {
   
    printf("\nARRAY ELEMENTS DISPLAY USING RECURSIVE FUNCTION\n");
    printf("------------------------------------------------\n");

    printf("Enter the limit: ");
    scanf("%d", &n);
    read();                                // Read the array elements
    printf("\nThe entered array elements in reverse order are:\n");
    disp(n - 1);                           // Recursive call

    return 0;
}

