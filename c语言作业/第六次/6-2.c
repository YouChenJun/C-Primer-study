#include<stdio.h>
#include<string.h>
int main()
{
	char a[6][10],t[10];
	int i,j;
	for(i=0;i<6;i++)
		gets(a[i]);
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
		if(strcmp(a[j],a[j+1])>0)
		{
			strcpy(t,a[j]);
			strcpy(a[j],a[j+1]);
			strcpy(a[j+1],t);
		}
	for(i=0;i<6;i++)
		puts(a[i]);
	return 0;
	
		
}
