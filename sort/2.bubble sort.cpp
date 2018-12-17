#include<stdio.h>

int main()
{
	int a[10],n,i,j,temp;
	
	printf("\n enter the number of elements");
	scanf("%d",&n);
	
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]); 
	
	for(i=n-1;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	
	printf("\n sorted elements");
	for(i=0;i<n;i++)
	printf("\t %d",a[i]);
	return 0;
}
