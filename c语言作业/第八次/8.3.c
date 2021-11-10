#include<stdio.h>
int search(int list[],int n,int x)
{
	int i;
	for(i=0;i<n;i++)
		if(list[i]==x)return i;
	return -1;
}
int main()
{
	int n,i,x;
	int a[10];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input %d integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Input x:");
		scanf("%d",&x);	
	if(search(a,n,x)==-1)
		printf("Not found");
	else
		printf("index = %d",search(a,n,x));
	return 0;
}
