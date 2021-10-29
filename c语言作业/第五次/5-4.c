#include<stdio.h> 
int main()
{
	int a[5],i,n,j=0,b=0;
	printf("input array:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("input number:");
	scanf("%d",&n);
	
	for(i=0;i<5;i++)
	{
		if(n==a[i])
			{
				j=1;
				b=i;
				printf("i=%d",i); 
				goto a; 
			}
	}
	if(!j)
		printf("error");
	a:
	return 0;
}
