#include<stdio.h>
int s1[100],s2[100],ch,f1=-1,r1=-1,f2=-1,r2=-1,t=1,temp;

void push()
{
	printf("\n enter the element to be pushed ");
	if(t==1)
	{
		scanf("%d",&s1[++r1]);
	}
	else
	{
		scanf("%d",&s2[++r2]);
	}
}

void pop()
{
	if(t==1)
	{
		if(f1==r1)
		{
		printf("\n stack empty \n");
	    }
		else
		{
		for(;f1<r1-1;)
		{
			s2[++r2]=s1[++f1];
		}
		printf("\n the popped element is %d",s1[++f1]);
	    }
	}
	else
	{
		if(f2==r2)
		{
		printf("\n stack empty \n");
	    }
		else
		{
		for(;f2<r2-1;)
		{
			s1[++r1]=s2[++f2];
		}
		printf("\n the popped element is %d",s2[++f2]);
	    }
	}
    t*=-1;	
}

void display()
{
	printf("\n the stack is \t");
	if(t==1)
	{
		if(f1==r1)
		{
		printf("\n stack empty \n");
	    }
		else
		{
		temp=f1;
		for(;temp<r1;)
		{
			printf("\t %d",s1[++temp]);
		}
	    }
	}
	else
	{
		if(f2==r2)
		{
		printf("\n stack empty \n");
	    }
		else
		{
		temp=f2;	
		for(;temp<r2;)
		{
			printf("\t %d",s2[++temp]);
		}
	    }
	}	
}

int main()
{
	while(1)
	{
		printf("\n 1.push \t 2.pop \t 3.display \t 4.exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:push();
			break;
			case 2:pop();
			break;
			case 3:display();
			break;
			case 4:return 0;
			break;
			default:printf("\n enter valid option");
		}
	}
	return 0;
}
