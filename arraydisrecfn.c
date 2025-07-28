//Display the array elements in the same order using a recursive fn
#include<stdio.h>

int a[10];

void read(int a[], int n) {
    int i;
    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}


void disp(int a[], int index, int n) {
    if(index == n)
        return;
    printf("%d ", a[index]);
    disp(a, index + 1, n);  
}


int main() {
    int n;
    printf("\nARRAY ELEMENTS DISPLAY USING RECURSIVE FUNCTION\n");
    printf("Enter the limit: ");
    scanf("%d", &n);
    read(a, n);
	printf("\nThe entered array elements are:\n");
    disp(a, 0, n); 
    return 0;
}

