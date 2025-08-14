//sum of polynomials
#include<stdio.h>
int a[10],b[10],c[20];
int n,i,m,max;

void read(int p,int arr[])
{
	for(i=p;i>=0;i--)
	{
		printf("Enter the coeff of x^%d",i);
		scanf("%d",&arr[i]);	
	}

}

void dis(int p,int arr[])
{
	printf("\nthe ent poly is:");
	for(i=p;i>=0;i--)
	{
		printf("%dx^%d ",arr[i],i);
		if(i!=0)
		{
			printf( "+ ");
			}	
	}
}

void add()
{
	max=(n>m)?n:m;
	for(i=max;i>=0;i--)
	{
		c[i]=0;
	}
	for(i=n;i>=0;i--)
	{
		c[i]=c[i]+a[i];
	}
	for(i=m;i>=0;i--)
	{
		c[i]=c[i]+b[i];
	}
	printf("\nSum of poly is:");
	for(i=max;i>=0;i--)
	{
		printf("%dx^%d ",c[i],i);
		if(i!=0)
		{
			printf(" + ");
		}
	}
}

int main()
{
	printf("enter the deg of 1st pol:");
	scanf("%d",&n);
	read(n,a);
	printf("\nenter the deg of 2nd pol:");
	scanf("%d",&m);
	read(m,b);
	dis(n,a);
	dis(m,b);
	add();
	return 0;
}
