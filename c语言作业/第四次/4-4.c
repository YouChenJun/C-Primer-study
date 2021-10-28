#include<stdio.h>
int main()
{
	int i,j,k=4;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=k;j++)
		printf("*");
		k--;
		printf("\n");
	}
	return 0;
} 

