#include<stdio.h>
int a[10][10],b[10][10],c[10][10];
int i,j,m,n,p,q;

void read(int s,int t,int mat[s][t])
{
	printf("enter the elem:");
	for(i=0;i<s;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d",&mat[i][j]);
		}
	}
}

void dis(int s,int t,int mat[s][t])
{
	printf("\nentered elem are:");
	for(i=0;i<s;i++)
	{
		printf("\n");
		for(j=0;j<t;j++)
		{
			printf("%d\t",mat[i][j]);
		}
	}
	
}
int issparse(int s,int t,int mat[s][t])
{
	int tot=(s*t)/2;
	int c=0;
	for(i=0;i<s;i++)
	{
		for(j=0;j<t;j++)
		{
			if(mat[i][j]==0)
			{
				c++;
			}
			
		}
	}
	return (c>tot);
	
}

void addsp(int s,int t,int mat[10][10],int mat2[10][10])
{
	printf("\nSum of sparse matrix:");
	for(i=0;i<s;i++)
	{
		for(j=0;j<t;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
	}
	printf("\n");
}

void check()
{
	if(n==p&&m==q)
	{
		int spA=issparse(n,m,a);
		int spB=issparse(p,q,b);
		
		if(spA && spB)
		{
			addsp(n,m,a,b);
		}
		else
		{
			printf("add not possible ");
		}
	}
	else
	{
		printf("Addition not possible as dimensions not match");
	}
}

int main()
{
	printf("enter the order of 1st matrix:");
	scanf("%d%d",&n,&m);
	read(n,m,a);
	printf("\nenter the order of 2nd matrix:");
	scanf("%d%d",&p,&q);
	read(p,q,b);
	dis(n,m,a);
	dis(p,q,b);
	check();
	return 0;
}
