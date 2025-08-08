#include<stdio.h>
char a;
int main()
{
	printf("Enter a character:");
	scanf("%c",&a);
	switch(a)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
			printf("Vowel character");
			break;
		default:
			printf("%c is not a vowel");
	}
	return 0;
}

