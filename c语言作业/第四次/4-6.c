#include<stdio.h>
int main()
{
	int n,i,temp;
	float sum,z=2,m=1;
	printf("Input n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=z/m;
		temp=m;
		m=z;
		z=temp+m;
	}
	printf("s=%.2f",sum);
	return 0;
}

