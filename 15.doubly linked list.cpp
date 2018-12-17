#include<stdio.h>

struct node
{
	int info;
	node *right,*left;
}*p,*front,*t;

void create()
{
	int n;
	printf("\n enter the value ");
	scanf("%d",&n);
	p=new node;
	p->info=n;
	p->left=NULL;
	p->right=NULL;
	if(front==NULL)
	front=p;
	else
	{
		t=front;
		while(t->right)
		t=t->right;
		t->right=p;
	    p->left=t;
	}
}

void ins()
{
	int k,n,insdat;
	p=new node;
	printf("\n enter the position to insert   1.begining \t 2.end \t 3.in between ");
	scanf("%d",&k);
	printf("\n enter the value to be inserted ");
	scanf("%d",&n);
	switch(k)
	{
		case 1:
		    p->right=front;
		    p->left=NULL;
		    p->info=n;
		    front->left=p;
		    front=p;
		    break;
		case 2:
			t=front;
			while(t->right)
	        t=t->right;
			p->right=NULL;
			p->info=n;
			p->left=t;			
			t->right=p;
			t=p;
		    break;
		case 3:
			printf("\n enter the value after which this should be inserted ");
			scanf("%d",&insdat);
			t=front;
			while(t->info!=insdat)
			t=t->right;
			p->left=t;
			p->info=n;
			p->right=t->right;
			t->right->left=p;
			t->right=p;
			break;
		default:
			printf("\n enter a valid choice ");
	}
}

void del()
{
	int k,deldat;
	t=front;
	if(t==NULL)
	printf("\n empty ");
	else
	{
    printf("\n enter the position to delete  1.begining \t 2.end \t 3.in between ");
	scanf("%d",&k);	
	switch(k)
	{
		case 1:
			front=front->right;
			front->left=NULL;
			t->right=NULL;
			delete t;
			break;
		case 2:
			while(t->right)
			t=t->right;
			t->left->right=NULL;
			t->left=NULL;
			delete t;
			break;
		case 3:
			printf("\n enter the value to be deleted ");
	        scanf("%d",&deldat);
			while(t->info!=deldat)
			t=t->right;
			t->right->left=t->left;
			t->left->right=t->right;
			t->left=NULL;
			t->right=NULL;
			delete t;
			break;
		default:
			printf("\n enter a valid choice ");	
	}
    }
}

void disp()
{
	printf("\n the list is ");
	t=front;
	if(t==NULL)
	printf("\n empty ");
	else
	while(t!=NULL)
	{
		printf("\t %d",t->info);
		t=t->right;
	} 
}

int main()
{
	int ch;
	front=NULL;
	while(1)
	{
		printf("\n 1.create \t 2.insert \t 3.delete \t 4.display \t 5.exit \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:create();
			break;
			case 2:ins();
			break;
			case 3:del();
			break;
			case 4:disp();
			break;
			case 5:return 0;
			break;
			default:printf("\n enter valid option");
		}
	}
	return 0;
}
