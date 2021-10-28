#include<stdio.h>
int main()
{
	int s=0,k=0,a;
	for(a=1;a<=99;a=a+2)
	{
		s+=a;
		if(a%2==1)
		k++;
	}
	
	
	printf("s=%d\n",s);
	printf("k=%d\n",k);
	return 0;
}
