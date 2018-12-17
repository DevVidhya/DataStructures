#include<stdio.h>

int main()
{
	int i,a[100],j,span[100],n;
	printf("\n enter the total number of days to consider ");
	scanf("%d",&n);
	
	printf("\n enter the prices ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++)
	{
		span[i]=1;
		for(j=i-1;j>=0&&a[i]>=a[j];j--)
		{
			span[i]++;
		}
	}
	
	printf("\n the span of ");
	for(i=0;i<n;i++)
	printf("\n span[%d] is %d",i,span[i]);
	
    return 0;
}
