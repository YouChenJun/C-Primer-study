#include<stdio.h>
int main()
{
	int h1,n,m;
	double sum=0,h2=0,j=2;
	printf("Input height: ");
	scanf("%d",&h1);
	printf("Input n: ");
	scanf("%d",&n);
	
    if(n>0)
    {
        sum=h1;
	for(m=1;m<=n;m++)
	{   
		sum+=h2*2;
		h2=h1/j;
        j*=2;       
	}
    }
	printf("distance=%0.1lf\nheight=%0.1lf",sum,h2);
	
	return 0;
}


