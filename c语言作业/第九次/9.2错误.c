#include<stdio.h>
#define N 10
void main() 
{
	int search(int *array,int n,int x);
	int *array;
	int n, x;
	int i=0;
	printf("input array data:");
	for(;i<N;i++)
		scanf("%d",array);
	printf("input search data:");
	scanf("%d",&x);
	search(&array,n,x);
	printf("%d",x);
}
int search(int *array, int n, int x)
{
	int i,k;
	for(i=0;i<N;i++)
	{
		if(*(array+i)=n)
		x=i;
		else 
		x=-1;
	}
	return x;
	
}


