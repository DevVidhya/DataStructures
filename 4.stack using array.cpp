#include<stdio.h>
int main()
{
	int a[100],ch,top=-1,n,i;
	while(1)
	{
		printf("\n 1.push \t 2.pop \t 3.display \t 4.stack top \t 5.exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n enter the element to insert ");
				scanf("%d",&n);
				a[++top]=n;
			    break;
			case 2:
				if(top==-1)
				printf("\n stack empty");
				else
			    top--;
				break;
			case 3:
				if(top==-1)
				printf("\n stack empty");
				else
				{
				printf("\n the stack is \t");
			    for(i=0;i<=top;i++)
				printf("\t %d",a[i]);	
			    }
				break;
			case 4:
				if(top==-1)
				printf("\n stack empty");
				else
				printf("\n the stack top is %d",top);
				break;
			case 5:
				return 0;
				break;
		}
	}
	return 0;
}
 
