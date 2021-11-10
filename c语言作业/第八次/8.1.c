#include<stdio.h>
int main()
{
	int c,d;
	int sushu(int n);
	printf("Input n:");
	scanf("%d",&c);
	d=sushu(c);
	if(d==1)
	{
		printf("%d is prime",c);
	}
	else
	{
		printf("%d is not prime",c);
	}
	return 0;
}
int sushu(int n)
{
	int j=0;
	for(j=2;j<n;j++)
	{
		if(n%j==0)
		{
			return 0;
		}
	}
	if(n>=j)
	
	return 1;
	
}
