#include<stdio.h>

void stlen(char a[])
{
	int c=0;
	for(int i=0;a[i]!='\0';i++)
	{
		c++;
	}
	printf("String length=%d",c);
}

void stcpy(char a[])
{
	char b[10];
	for(int i=0;a[i]!='\0';i++)
	{
		b[i]=a[i];
	}
	printf("Copy of string=%s",b);
}


void stcat(char a[]) {
    char c[10];
    int i, j;

    printf("Enter another string: ");
    scanf("%s", c);
    for (i = 0; a[i] != '\0'; i++);
    for (j = 0; c[j] != '\0'; j++, i++) {
        a[i] = c[j];
    }

    a[i] = '\0'; 

    printf("After concatenation = %s\n", a);
}


void stcmp(char a[])
{
	char d[10];
	printf("enter a string:");
	scanf("%s", &d);
	for(int i=0;a[i]!='\0'||d[i]!='\0';i++)
	{
		if(a[i]!=d[i])
		{
			printf("Strings are diff");
			break;
		}
		else
		{
			printf("Strings are same");
		}
	}
}
		

void srev(char a[])
{
	int len = 0;
    while (a[len] != '\0') {
        len++;
    }

    printf("Reversed string = ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", a[i]);
    }
    printf("\n");
}
int main()
{
	int ch;
	char a[10];
	while(1)
	{

	printf("\n1.Strlength\n2.Strcopy\n3.Strcat\n4.Strcmp\n5.Strrev\nEnter ur option:");
	scanf("%d",&ch);
	printf("Enter a string:");
	scanf("%s", &a);
	switch(ch)
	{
		case 1:
			stlen(a);
			break;
		case 2:
			stcpy(a);
			break;
		case 3:
			stcat(a);
			break;
		case 4:
			stcmp(a);
			break;
		case 5:
			srev(a);
			break;
		
		case 6:
			return 0;
		default:
			printf("wrong choice");
			
			
	}
}
return 0;
	}
