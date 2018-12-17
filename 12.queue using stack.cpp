#include<stdio.h>
int q1[100],q2[100],temp,ch,top1=-1,top2=-1;

void ins()
{
	printf("\n enter the element");
	scanf("%d",&q1[++top1]);
}

void del()
{
	if(top1==-1&&top2==-1)
	{
		printf("\n queue empty \n");
	}
	else 
	{
		if(top2==-1)
		{
		for(;top1>=0;)
		{
			q2[++top2]=q1[top1--];
		}
	    }
		printf("\n the deleted element is = %d \n",q2[top2--]);
	}
	
}


void disp()
{
	printf("\n the stack is ");
	if(top1==-1&&top2==-1)
	{
		printf("\n queue empty \n");
	}
	else 
	{
		for(temp=top2;temp>=0;)
		printf("\t %d",q2[temp--]);
		for(temp=0;temp<=top1;)
		printf("\t %d",q1[temp++]);
	}
	
}

int main()
{

	while(1)
	{
		printf("\n 1.insert \t 2.delete \t 3.display \t 4.exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:ins();
			break;
			case 2:del();
			break;
			case 3:disp();
			break;
			case 4:return 0;
			break;
			default:printf("\n enter a valid choice");
		}
	}
    return 0;
}
