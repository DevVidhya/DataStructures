#include<stdio.h>

int main()
{
	int a[100],n,top1,top2,k,ch,i;
	printf("\n enter the size of array ");
	scanf("%d",&n);
	top1=-1;
	top2=n;
	
	while(1)
	{
		printf("\n 1.push 1 \t 2.pop 1 \t 3.display 1 \t 4.push 2 \t 5.pop 2 \t 6.display 2 \t 7.exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				if(top1+1==top2)
				printf("\n stack overflow");
				else
				{
				printf("\n enter the element to insert ");
				scanf("%d",&k);
				a[++top1]=k;
			    }
			    break;
			case 4:
				if(top1+1==top2)
				printf("\n stack overflow");
				else
				{
				printf("\n enter the element to insert ");
				scanf("%d",&k);
				a[--top2]=k;
			    }
			    break;
			case 2:
				if(top1==-1)
				printf("\n stack 1 underflow");
				else
			    top1--;
				break;
			case 5:
				if(top2==n)
				printf("\n stack 2 underflow");
				else
			    top2++;
				break;
			case 3:
				if(top1==-1)
				printf("\n stack 1 empty");
				else
				{
				printf("\n the stack is \t");
			    for(i=0;i<=top1;i++)
				printf("\t %d",a[i]);	
			    }
				break;
			case 6:
				if(top2==n)
				printf("\n stack 2 empty");
				else
				{
				printf("\n the stack is \t");
			    for(i=n-1;i>=top2;i--)
				printf("\t %d",a[i]);	
			    }
				break;
			case 7:
				return 0;
				break;
		}
	}
	return 0;
}
 

