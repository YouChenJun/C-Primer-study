#include<stdio.h>
double fac(int n)
{
	if(n==0)return 1.0;
 	return n*fac(n-1);
}
int main()
{
	int i,n;
	printf("Enter n: ");
 	scanf("%d",&n);
 		for(i=1;i<n+1;i++)
   	printf("%d!=%.0lf\n",i,fac(i));  
 	return 0;
}

