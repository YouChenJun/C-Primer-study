#include<stdio.h>
int main()
{
	int a=0,i;
	for(i=1;i<=100;i++)
	{
		if(i%7==0)
			{
			a++;
			printf("%d ",i);
			if(a%5==0)
			printf("\n");
			}
	
	}
	return 0;
		
} 
