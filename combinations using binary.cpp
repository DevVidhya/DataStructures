#include<stdio.h>

int main()
{
	int a[100],binary[100],n,i,check=0,pos;
	
	printf("\n enter the number of elements in the combination "); // get number of integers for producing combination
	scanf("%d",&n);
	
	printf("\n enter the elements "); // get the integers for which combination should be produced
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	
	for(i=0;i<n;i++) // keeping initial binary state
	binary[i]=0;
	
	printf("\n the combinations are \n NULL SET"); // printing combinations
	while(check==0)
	{
		check=1;
		
		for(i=0;i<n;i++) // changing first zero to one
		{
			if(binary[i]==0)
			{
				pos=i;
				binary[i]=1;
				break;
			}
		}
		
		for(i=0;i<pos;i++) // changing ones before first zero to zero
		{
			if(binary[i]==1)
			binary[i]=0;
		}
		
		printf("\n {");
		for(i=0;i<n;i++) // printing the numbers corresponding to the positions where binary is one 
		{
		    if(binary[i]==1)
			{
				printf("\t %d",a[i]);
			}	
		}
		printf("\t }");
		
		for(i=0;i<n;i++)
		if(binary[i]==0)
		check=0;
	}
	
	return 0;
}
