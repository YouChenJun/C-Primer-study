#include<stdio.h>
int main()
{
	int a,b,c,d,i;
	char ch;
	a=0,b=0,c=0,d=0;
	printf("Input 10 characters:");
	for(i=0;i<10;i++)
	{
		ch=getchar(); 
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
		a++;
		else if(ch>='0'&&ch<='9')
		b++;
		else if(ch==' '||ch=='\n')
		c++;
		else
		d++;
		
	}
	printf(" letter=%d,blank=%d,digit=%d,other=%d",a,c,b,d);
	return 0;
	
	
}

