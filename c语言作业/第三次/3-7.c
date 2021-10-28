#include<stdio.h>
#include<math.h>
int main()
{

	float x,y;
	scanf("%f",&x);
	if(-10<=x&&x<=4)
		{
			y=fabs(x-2);
			printf("y=%.2f",y);
		}
	else if(5<=x&&x<=7)
		{
			y=x+10;
			printf("y=%.2f",y);
		}
	else if(8<=x&&x<=12)
		{
			y=x*x*x*x;
			printf("y=%.2f",y);
		}
	else
		printf("No answer.");
	
	return 0;
}

