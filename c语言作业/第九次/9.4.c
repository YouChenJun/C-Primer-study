#include<stdio.h>
void connect(char *s1, char *s2) {
	/*int i = 0, j = 0;
	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s2[j] != '\0'; j++) {
			s1[i] = s2[j];
			i++;
		}
	s1[i] = '\0'; */

	while(*s1!='\0')
	{
		s1++;
	}
	while(*s2!='\0')
	{
		*s1=*s2;
		s2++;
		s1++;
	}
	*s1='\0';
	
}
int main() {
	char s1[100], s2[100];
	printf("input s1:");
	gets(s1);
	printf("input s2:");
	gets(s2);
	connect(s1, s2);
	puts(s1);
	return 0;
}
