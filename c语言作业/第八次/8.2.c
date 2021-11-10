#include<stdio.h>
#define N 10
int sort(int* a,int n)//此处使用了指针，写的比较垃圾
{
	int i,k,c,j;
	for(i=0;i<n-1;i++)
	{
		
		for(j=i+1;j<n;j++)
		if(a[i]<a[j])
		{
			c=a[i];
			a[i]=a[j];
			a[j]=c;
		}
	}
	return 0;
}
int main()
{
	int i,n;
	int a[N];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input array of %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sort(a,n);
	printf("After sorted the array is:");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
