#include<stdio.h>
int main()
{
	int a[5],i;
	float ave=0,sum=0;
	printf("input numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	ave=sum/5.0;
	printf("ave=%.2f",ave);
	return 0;
}
