#include <stdio.h>
int main()
{
	int a,b,c,i,j;
	
	printf("Input m: ");
	scanf("%d",&i);
	printf("Input n: ");
	scanf("%d",&j);
	for(i = 100; i <= j; i++)
	{
	a = i % 10;
	b = i / 10 % 10;
	c = i / 10 / 10 % 10;
	if (i == a*a*a + b*b*b + c*c*c)
		printf("%d\n",i);
	}
	return 0;
}

