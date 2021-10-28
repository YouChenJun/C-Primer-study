#include<stdio.h>
int main()
{
	int m;
	for(m=10; ;m++)
	{
		if((m%5==1)&&(m%6)==5&&(m%7)==4&&(m%11)==10)
		{
			printf("%d",m);break;
		}
	}
	return 0;
}

