#include<stdio.h>
int main()
{
	char s[80];
	int i,flag=0;
	printf("Input a string:");
	while((s[i]=getchar())!='\n')
	{
		if(s[i]>='A'&&s[i]<='Z')
		{
			if((s[i]!='E')&&(s[i]!='I')&&(s[i]!='O')&&(s[i]!='U'))
			flag++;
		}
		i++;	
	}
	printf("count=%d",flag);
	return 0;
}
