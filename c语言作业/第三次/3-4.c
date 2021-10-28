 #include<stdio.h>
 int main()
 {
 	char op;
 	scanf("%c",&op);
 	switch(op)
	{
		case'A':
			printf("A is 90~100");
		break;
		
		case'B':
			printf("B is 80~89");
		break;
		
		case'C':
			printf("C is 70~79");
		break;
		
		case'D':
			printf("D is 60~69");
		break;
		
		case'E':
			printf("E is 0~59");
		break;
		default:
			printf("errno\n");
	}
	 
 	return 0;
 }

