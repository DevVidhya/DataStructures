#include<stdio.h>
int main()
{
	int a[10],n,i,j,pos,min,temp;
	
	printf("\n enter the number of elements");
	scanf("%d",&n);
	
	printf("\n enter the elements");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]); 
	
	for(i=0;i<n;i++)
	{
		  min=a[i];
		  pos=i;
		  for(j=i+1;j<n;j++)
		  {
		  	if(a[j]<min)
		  	{
		  		min=a[j];
		  		pos=j;
			}
		  }
		  temp=a[i];
		  a[i]=a[pos];
		  a[pos]=temp;
	}
	
	printf("\n sorted elements");
	for(i=0;i<n;i++)
	printf("\t %d",a[i]);
	return 0;
}
