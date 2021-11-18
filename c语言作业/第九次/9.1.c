#include<stdio.h>
void main()
{
	void swap(int *a,int *b);
	int a,b;
	printf("Please input the first integer:\n");
	scanf("%d",&a);
	printf("Please input the second integer:\n");
	scanf("%d",&b);
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);
	printf("a=%d,b=%d",a,b);
	return 0;
}
void swap(int *pa,int *pb)
{
	int c;
	c=*pa;
	*pa=*pb;
	*pb=c;
}

