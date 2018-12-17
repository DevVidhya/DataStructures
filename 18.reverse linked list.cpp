#include<stdio.h>

struct node
{
	int info;
	node *next;
}*p,*front,*rear,*cur,*prev,*nex;

void ins()
{
	int n;
	printf("\n enter the value ");
	scanf("%d",&n);
	p=new node;
	p->info=n;
	p->next=NULL;
	if(front==NULL)
	front=rear=p;
	else
	{
		rear->next=p;
	    rear=p;
	}
}

void disp(node *t)
{
	if(t==NULL)
	printf("\n queue empty \n");
	else
	while(t!=NULL)
	{
		printf("%d \t",t->info);
		t=t->next;
	}
}

void rev()
{
	printf("\n before reversing ");
	disp(front);
	prev=nex=NULL;
	cur=front;
	while(cur!=NULL)
	{
		nex=cur->next;
		cur->next=prev;
		prev=cur;
		cur=nex;
	}
	printf("\n after reversing  ");
	disp(rear);
}

int main()
{
	int ch;
	front=rear=NULL;
	while(1)
	{
		printf("\n 1.insert \t 2.reverse \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:ins();
			break;
			case 2:rev();
			return 0;
			break;
			default:printf("\n enter valid option");
		}
	}
	return 0;
}
