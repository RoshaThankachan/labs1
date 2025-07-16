#include<stdio.h>
int a[5],pos=-1;

void insert(int n)
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


void del(int dp)
{
	if(pos==-1)
	{
		printf("\nArray is empty");
	}
	else
	{
		printf("\nDeleted elem is %d",a[dp]);
		for(int i=dp;i<pos;i++)
		{
			a[i]=a[i+1];
		}
		pos--;
	}
}


void sort()
{
	for(int i=0;i<=pos;i++)
	{
		for(int j=i+1;j<=pos;j++)
		{
			if(a[i]>a[j])
			{
				int t=a[i];
				a[i]=a[j];
				a[j]=t;
				
			}
			
		}
	}
	for(int i=0;i<=pos;i++)
	{
		printf("%d",a[i]);
	}
}

void search(int val)
{
	int i;
	for(i=0;i<=pos;i++)
	{
		if(a[i]==val)
		{
			printf("\nElem found at pos %d",i+1);
			break;
		}
	}
	if(i>pos)
	printf("\nElem not found");
			
}		

int main()
{
	int n,ch,dp,val;
	while(1)
	{
	printf("\n\n1.Insert\n2.Delete\n3.Sort\n4.Search\n5.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
			case 1:
				printf("\nEnter the elem:");
				scanf("%d",&n);
				insert(n);
				break;
			
			case 2:
				printf("\nEnter the pos to delete:");
				scanf("%d",&dp);
				del(dp);
				break;
				
			case 3:
				printf("\nArray after sorting:");
				sort();
				break;
				
			case 4:
				printf("\nEnter the elem to search:");
				scanf("%d",&val);
				search(val);
				break;
			
			case 5:
				return 0;
				
			default:
				printf("\nWrong choice");
				break;
		
	}
	}
	
	return 0;
}
