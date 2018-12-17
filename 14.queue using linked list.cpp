#include<stdio.h>
int u=0;

struct node
{
	int info;
	node *next;
}*p,*front,*rear;

void ins()
{
	u++;
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

void del()
{
	u--;
	if(front==NULL)
	printf("\n queue empty");
	else
	{
	printf("\n the deleted element is %d \n",front->info);
    p=front;
	front=front->next;
	delete p;
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
 
int main()
{
	int ch;
	front=rear=NULL;
	while(1)
	{
		printf("\n 1.insert \t 2.delete \t 3.display \t 4.number of elements \t 5.exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:ins();
			break;
			case 2:del();
			break;
			case 3:disp(front);
			break;
			case 4:printf("\n number of elements = %d",u);
			break;
			case 5:return 0;
			break;
			default:printf("\n enter valid option");
		}
	}
	return 0;
}

