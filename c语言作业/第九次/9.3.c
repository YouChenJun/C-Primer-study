#include<stdio.h>
void Copy_string(char* str1, char* str2) {
	int i = 0;
	while (str1[i] != '\0') {
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';

}
int main() {
	void Copy_string(char* str1, char* str2);
	char str1[100];
	char str2[100];
	printf("Input str1:");
	gets(str1);
Copy_string( str1,  str2);
	printf("Output str2:");
	puts(str2);
	return 0;
}

