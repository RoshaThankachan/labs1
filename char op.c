#include<stdio.h>
char a[20];
void coun()
{
	int c=0,i;
	for(i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("\nThe length of the String is %d",c);
}

void cop()
{
	int i;
	char b[20];
	for(i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	b[i]='\0';
	printf("\nThe copied string=%s",b);
}

void cat()
{
	int i=0,j=0;
	char c[20];
	printf("\nEnter a string:");
	scanf("%s",&c);
	printf("\nAfter concatenation:");
	while(a[i]!='\0')
	{
		i++;
	}
	while(c[j]!='\0')
	{
		a[i]=c[j];
		i++;
		j++;
	}
	a[i]='\0';
	printf("%s",a);
}

void rev()
{
	int i;
	int l=0;
	while(a[l]!='\0')
	{
		l++;
	}
	printf("\nString reveresed:");
	for(i=l-1;i>=0;i--)
	{
		printf("%c",a[i]);
	}
}

void cmp()
{
	int i,flag=0;
	char d[20];
	printf("\nEnter a string:");
	scanf("%s",d);
	for(i=0;a[i]!='\0'|| d[i]!='\0';i++)
	{
		if(a[i]!=d[i])
		{
			flag=1;
			break;
		}
}
		if(flag==0)
		{
			printf("Same");
		}
		else
		{
				printf("Diff");			
		

	}
}

int menu()
{
	int ch;
	while(1){
	printf("\n1.Length\n2.Copy\n3.Concatenation\n4.Reverese\n5.Compare\n6.Exit\n");
	printf("Enter your choice:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			coun();
			break;
		case 2:
			cop();
			break;
		case 3:
			cat();
			break;
		case 4:
			rev();
			break;
		case 5:
			cmp();
			break;
		case 6:
			return 0;
		default:
			printf("Invalid choice");
	}
}
}




int main()
{
	printf("\nEnter a string:");
	gets(a);
	menu();
	return 0;
}
