#include<stdio.h>
int main()
{
	char s[20];
	int n, i = 0;
	float a, b, c;
	printf("n=");
	scanf("%d", &n);
	for ( i; i < n; i++)
	{
		scanf("%s%f%f%f", s, &a, &b, &c);
		printf("%5s,Salary is:%7.2f\n", s, a + b - c);
	}
	return 0;
}
