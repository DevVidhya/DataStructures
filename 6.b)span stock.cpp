#include<stdio.h>

int main()
{
	int i,a[100],j,span[100],n,stack[100],top=-1;
	printf("\n enter the total number of days to consider ");
	scanf("%d",&n);
	
	printf("\n enter the prices ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	span[0]=1;
	stack[++top]=0;
	for(i=1;i<n;i++)
	{
		j=0;
			for(;a[stack[top]]<=a[i]&&top>=0;top--)
			{
			if(top==0)
	    	{
	    		span[i]=i+1;
	    		j=1;
			}
	    	
		    }
		    if(j!=1)
			span[i]=i-stack[top];
			stack[++top]=i;
			
	}
	
	printf("\n the span of ");
	for(i=0;i<n;i++)
	printf("\n span[%d] is %d",i,span[i]);
	
    return 0;
}
