#include<stdio.h>
int main()
{
	char a,b;
	a=getchar();
	b=a-32; 
	if(a>='a'&&a<='z')
	printf("%c",b);
	else
	printf("%c",a);
	return 0;
	
}

