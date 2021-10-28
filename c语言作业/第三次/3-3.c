#include<stdio.h>
int main()
{
	char ch;
	scanf("%c",&ch);
	if('a'<=ch&&ch<='z')
		printf("%c\n",'z'-(ch-'a'));
	else if('A'<=ch&&ch<='Z')
		printf("%c\n",'Z'-(ch-'A'));
	else 
		printf("It is not a letter.") ;
	return 0;
}

