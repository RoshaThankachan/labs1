/*
3. Use a menu-driven program to insert, search, delete and sort elements in an array using functions (use only local variables)
@ Rosha_Thankachan
Completed on : 25/07/2025 
*/

#include<stdio.h>

int insert(int a[], int pos, int n) {                       //Function for inserting elements to array
    if(pos == 4) {
        printf("\nArray full");
    } else {
        pos++;
        a[pos] = n;											//Element inserted
        printf("Element inserted");
    }
    return pos;
}


int del(int a[], int pos, int dp) {					    	//Function for deleting elements from array
    if(pos == -1) {
        printf("\nArray is empty");
    } else {
        if(dp > pos || dp < 0) {
            printf("\nInvalid position");					//Checking position
            return pos;
        }
        printf("\nDeleted elem is %d", a[dp]);
        for(int i = dp; i < pos; i++) {
            a[i] = a[i + 1];								//Element deleted
        }
        pos--;
    }
    return pos;
}

void sort(int a[], int pos) {								//Function for sorting elements in an array
    for(int i = 0; i <= pos; i++) {
        for(int j = i + 1; j <= pos; j++) {
            if(a[i] > a[j]) {
                int t = a[i];								//Temporary variable initialized
                a[i] = a[j];											
                a[j] = t;
            }
        }
    }
    for(int i = 0; i <= pos; i++) {
        printf("%d ", a[i]);
    }
}

void search(int a[], int pos, int val) {                      //Function for searching elements in an array
    int i;
    for(i = 0; i <= pos; i++) {
        if(a[i] == val) {										//searching if key elem is in array
            printf("\nElement found at position %d", i + 1);
            break;
        }
    }
    if(i > pos)
        printf("\nElement not found");
}

int main() {
	printf("\nARRAY OPERATIONS USING LOCAL VARIABLES\n");
	printf("--------------------------------------\n");
    int a[5], pos = -1;
    int n, ch, dp, val;

    while(1) {
        printf("\n\n1.Insert\n2.Delete\n3.Sort\n4.Search\n5.Exit\n");       //Menu for user selection
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch) {
            case 1:
                printf("\nEnter the element: ");
                scanf("%d", &n);
                pos = insert(a, pos, n);                                   //Inserting elem function call
                break;

            case 2:
                printf("\nEnter the position to delete: ");
                scanf("%d", &dp);
                pos = del(a, pos, dp);                                     //Deleting elem function call
                break;

            case 3:
                printf("\nArray after sorting: ");
                sort(a, pos);
                break;                                                   //Sort function call with arg

            case 4:
                printf("\nEnter the element to search: ");
                scanf("%d", &val);
                search(a, pos, val);                                    //Search function call with arg
                break;

            case 5:
                return 0;                                              //For exiting from loop

            default:
                printf("\nWrong choice");
                break;
        }
    }

    return 0;
}

