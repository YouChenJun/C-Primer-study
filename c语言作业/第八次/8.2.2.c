#include <stdio.h>
void sort(int a[],int n);
int main()
{
    int a[20],i,n;
    printf("Input n:");
	scanf("%d",&n);
	printf("Input array of %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
    sort(a,n);
  	printf("After sorted the array is:");
    for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void sort(int *a,int n)
{
    int i,j,k;
    for(i=0;i<n-1;i++)
    {
        k=i;
        for(j=i+1;j<n;j++)
            if(a[k]>a[j])
                k=j;
        if(k!=i)
            a[k]^=a[i],a[i]^=a[k],a[k]^=a[i];
    }
}
