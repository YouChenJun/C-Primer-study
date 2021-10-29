#include<stdio.h>
int main()
{
	int a[10],i,z=0;
	float sum,ave=0;
	sum=0;
	printf("Input numbers: ");
	for(i=0;i<10;i++)
		{
			scanf("%d",&a[i]);
			if(a[i]%2==0)
				{
					sum=sum+a[i];
					++z;
				}
		}
	ave=sum/z;
	printf("the number of even number is: %d\n",z);
	printf("the average of even number is: %.1f\n",ave);
	return 0;
		
}
