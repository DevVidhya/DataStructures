#include<stdio.h>

struct node
{
	int info;
	node *next;
}*p,*top;

void push()
{
	int n;
	printf("\n enter the value to push ");
	scanf("%d",&n);
	p=new node;
	p->info=n;
	p->next=NULL;
	if(top==NULL)
	top=p;
	else
	{
		p->next=top;
	    top=p;
	}
}

void pop()
{
	if(top==NULL)
	printf("\n stack empty");
	else
	{
	printf("\n the poped element is %d \n",top->info);
    p=top;
	top=top->next;
	delete p;
	}
}

void disp(node *t)
{
	if(t==NULL)
	printf("\n queue empty \n");
	else
	{printf("\n the stack elements are ");
	while(t!=NULL)
	{
		printf("%d \t",t->info);
		t=t->next;
	}
    }
}

int main()
{
	int ch;
	top=NULL;
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
			case 3:disp(top);
			break;
			case 4:return 0;
			break;
			default:printf("\n enter valid option");
		}
	}
	return 0;
}

