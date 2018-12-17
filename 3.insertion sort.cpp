#include<stdio.h>

int main()
{
	int a[100],key,n,i,j;
	
	printf("\n enter the number of elements");
	scanf("%d",&n);
	
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]); 
	
	for(i=1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0&&a[j]>key;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=key;
	}
	
	printf("\n sorted elements");
	for(i=0;i<n;i++)
	printf("\t %d",a[i]);
	
	return 0;
}
