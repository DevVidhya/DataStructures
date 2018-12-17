#include<stdio.h>

int main()
{
	int i,j,t,n,mobile=0,pos,fact=1,dir[100],a[100];
	
	printf("\n enter the number of integers to be taken for permutation ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++) 
	{
		a[i]=i+1;     // assigning the array elements with integers from 1-n
		dir[i]=-1;    // initial direction from right to left < 
	}
	
	printf("\n The permutations are \n");
	for(i=0;i<n;i++) // printing first permutation
	printf("%d",a[i]);
	
	for(i=1;i<=n;i++)//finding n!
	fact*=i;
	
	for(j=1;j<fact;j++)// for repeating the process for (n!-1) times
	{
	
	mobile=0;
	for(i=0;i<n;i++) // finding greatest mobile number and its position
	{
		if(dir[i]==-1&&i!=0)
		{
			if(a[i]>a[i-1]&&a[i]>mobile)
			{
				mobile=a[i];
				pos=i;
			}
		}
		
		if(dir[i]==1&&i!=n-1)
		{
			if(a[i]>a[i+1]&&a[i]>mobile)
			{
				mobile=a[i];
				pos=i;
			}
		}
	}
	
	if(dir[pos]==-1)  // swapping the mobile number and direction 
	{

		t=a[pos];
		a[pos]=a[pos-1];
		a[pos-1]=t;
		
		t=dir[pos];
		dir[pos]=dir[pos-1];
		dir[pos-1]=t;
	}
	else if(dir[pos]==1)
	{
		t=a[pos];
		a[pos]=a[pos+1];
		a[pos+1]=t;
		
		t=dir[pos];
		dir[pos]=dir[pos+1];
		dir[pos+1]=t;
	}
	
	for(i=0;i<n;i++) // changing direction of the integer greater than the mobile integer 
	{
		if(a[i]>mobile)
		dir[i]*=-1;
	}
	
	printf("\t");
	for(i=0;i<n;i++) // printing next permutation
	printf("%d",a[i]);
	
    }
    return 0;	
}
