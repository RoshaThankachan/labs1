#include<stdio.h>

int dis(int n)
{
	if(n==0)
	{
		return 1;
	}
	printf("%d\t",n);
	dis(n-1);
}


int main()
{
	int n;
	printf("Enter the number:");
	scanf("%d",&n);
	dis(n);
	return 0;
}
