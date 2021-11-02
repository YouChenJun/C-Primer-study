#include<stdio.h>
int changdu(char a[])
{
	int i=0,j=0;
	for(i;a[i]!='\0';i++)
	j++;
	return i;
}
int main()
{
	char a[80];
	gets(a);
	printf("%d",changdu(a));
	return 0;
}

