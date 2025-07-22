#include<stdio.h>
#define n 10
char a[n];
int top=-1;

void push(char b)
{
	if(top+1==n)
	{
		printf("Stack overflow\n");
		return;
	
	}
	else
	{
		top++;
		a[top]=b;
	}
	
}
char pop()
{
	if(top==-1)
	{
		printf("Stack underflow\n");
		return '\0';
	}
	else
	{
		return a[top--];
		
	}
}


int main()
{
	int i;
	char str[n],rev[n];
	printf("Enter a string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
			push(str[i]);
	}
	for(i=0;top!=-1;i++)
	{
		rev[i]=pop();
	}
	rev[i]='\0';
printf("Reversed string=%s",rev);

}
