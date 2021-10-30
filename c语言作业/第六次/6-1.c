#include<stdio.h>
int main()
{
	char a[80],ch;
	int i=0,index=-1;
	printf("Input a character:");
	scanf("%s",&ch);
	printf("Input a string:");
	scanf("%s",a);
	while(a[i]!='\0')
	{
		if(a[i]==ch)
			
				index=i;
			i++;
				
			
	}
	if(index==-1)
		printf("Not Found");
	else
		printf("index=%d",index);
	return 0;
}
