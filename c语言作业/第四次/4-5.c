#include<stdio.h>
int main()
{
	int m,n,i,j,sum1=1,sum2=1;
	printf("Enter m: ");
	scanf("%d",&m);
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1;i<=m;i++)
	{
			
		sum1=sum1*i;
	}
	
	for(j=1;j<=n;j++)
	{
		sum2=sum2*j;
	}
	
	printf("%d!+%d!=%d\n",m,n,sum1+sum2);
	return 0; 
}

