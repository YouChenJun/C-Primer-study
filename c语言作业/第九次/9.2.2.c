#include<stdio.h>
int search(int *array, int n, int x) {
	int i = 0;
	for (; * (array + i) < n; i++) {
		if (*(array + i) == x)
			return i;
	}
	return -1;
}
int main() {
	int s1[10];
	int n = 0;
	int x;
	printf("input array data:");
	/* for(;s1[n]!='\n';n++)
		scanf("%d",s1[n]); */
	for (; n < 10; n++)
		scanf("%d", &s1[n]);
	printf("input search data:");
	scanf("%d", &x);
	int d = search(s1, n, x);
	if (d == -1)
		printf("NO!");
	else
		printf("%d", d);
	return 1;

}
