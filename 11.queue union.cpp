#include<stdio.h>
#include<stdlib.h>
int i,f=0,r=-1,count[100];

union queue
{
	int a;
	float b;
	char ch;
}p[100];

void ins()
{
	    printf("\n 1.int \t 2. float \t 3.char \t 4.exit \n");
		scanf("%d",&count[++r]);
		switch(count[r])
		{
		case 1:printf("\n enter an integer");
	           scanf("%d",&p[r].a);
	           break;
	    case 2:printf("\n enter a float number");
	           scanf("%f",&p[r].b);
	           break;
	    case 3:printf("\n enter a character");
	           scanf(" %c",&p[r].ch);
	           break;
	    default:printf("\n enter a valid choice");
		}
}

void del()
{
	if(f>r)
	{
		printf("\n queue empty ");
	}
	else
	{
		switch(count[f])
		{
		case 1:printf("\n the deleted element is %d",p[f++].a);
	           break;
	    case 2:printf("\n the deleted element is %f",p[f++].b);
	           break;
	    case 3:printf("\n the deleted element is %c",p[f++].ch);
	           break;
		}
		
	}
}

void disp()
{
	if(f>r)
	printf("\n queue empty");
	else
	{
		printf("\n the queue is ");
	for(i=f;i<=r;i++)
	{
		switch(count[i])
		{
		case 1:printf("\t %d",p[i].a);
	           break;
	    case 2:printf("\t %f",p[i].b);
	           break;
	    case 3:printf("\t %c",p[i].ch);
	           break;
		}
	}
    }
}

int main()
{
	int k;
	while(1)
	{
		printf("\n 1.insert \t 2.delete \t 3.display \t 4.exit \n");
		scanf("%d",&k);
		switch(k)
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
