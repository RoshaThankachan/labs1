/*
2. Use a menu-driven program to insert, search, delete and sort elements in an array using functions (use global variables) 
@ Rosha_Thankachan
Completed on : 25/07/2025
*/

#include<stdio.h>
int a[5],pos=-1;      						  //Array and position declared as Global variables


void insert(int n)   					   	//Function for inserting values to Array
{
	if(pos == 4)
	{
		printf("\nArray full");				
	}
	else
	{
		pos++;
		a[pos]=n;                          
		printf("Element inserted");		
	}	
}
	

void del(int dp)							//Function for deleting values from Array

{
	if(pos==-1)
	{
		printf("\nArray is empty");
	}
	else
	{
		printf("Deleted elem is %d",a[dp]);
		for(int i=dp;i<pos;i++)
		{
			a[i]=a[i+1];			         
		}
		pos--;
	}
}


void sort()								//Function for sorting values in Array
{
	for(int i=0;i<=pos;i++)
	{
		for(int j=i+1;j<=pos;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];              //Temporary variable t initialized
				a[i]=a[j];
				a[j]=t;				
			}			
		}		
	}
	
	for(int i=0;i<=pos;i++)
	{
		printf("%d\t",a[i]);		
	}	
}


void search(int val)							//Function to search an element in the array
{
	int i;
	for(i=0;i<=pos;i++)
	{
		if(a[i]==val)
		{
			printf("Element found at position %d",i+1);     //If found display its position
			break;
		}
	}
	if(i>pos)
	printf("Element not found");	
}


int main()
{
	int n,ch,dp,val;                                                           //Initializing local variables
	printf("ARRAY OPERATIONS USING GLOBAL VARIABLES\n");
	printf("\n---------------------------------------");
	while(1)
	{
		printf("\n\n1.Insert\n2.Delete\n3.Sort\n4.Search\n5.Exit\n");         //Menu for user selection
		printf("Enter your choice:");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter the element:");								  
				scanf("%d",&n);
				insert(n);                                                    //Insertion function call
				break;
				
			case 2:
				printf("Enter the position to delete:");
				scanf("%d",&dp);
				del(dp);												   	//Deletion function call
				break;
				
			case 3:
				printf("Array after sorting:");						
				sort();													    //Sorting function call
				break;
				
			case 4:
				printf("Enter the element to search:");
				scanf("%d",&val);
				search(val);												//Searching function call
				break;
				
			case 5:
				return 0;
																	//For exiting from loop
			default:
				printf("\nWrong choice");
				break;
		}		
	}

return 0;
}

