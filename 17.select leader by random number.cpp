#include<stdio.h>

int m;
struct node
{
	int info;
	node *next;
}*p,*start,*r,*t;

void create()
{
	int n,k=0;
	printf("\n enter the number of elements in the list ");
	scanf("%d",&m);
	
	while(++k<=m)
	{
	printf("\n enter the student roll number ");
	scanf("%d",&n);
	p=new node;
	p->info=n;
	p->next=NULL;
	if(start==NULL)
    start=p;
	else
	{
		t=start;
		while(t->next)
		t=t->next;
		t->next=p;
	}
    }
    t=start;
    while(t->next)
		t=t->next;
		t->next=start;
}



void del()
{
	int s,n,q=1;
	printf("\n enter the roll number where to start ");
	scanf("%d",&s);
	printf("\n enter a random value n ");
	scanf("%d",&n);
	t=start;
	if(t==NULL)
	printf("\n empty ");
	else
	{
	while(t->info!=s)
	t=t->next;	
	while(m>0)
	{
		if(q==n)
		{
			q=1;
			r->next=t->next;
			printf("\n the roll number of deleted student is %d ",t->info);
			delete t;
			t=r->next;
			m--;
		}
		else
		{
			if(q==n-1)
			{
				r=t;	
			}
			q++;
			t=t->next;
		}
		
	} 
    }
    printf("\n the leader roll number is %d ",t->info);
}

int main()
{
	int ch;
	start=NULL;
	create();
	del();
	return 0;
}

