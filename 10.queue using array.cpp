#include<stdio.h>
int main()
{
	int a[100],ch,front=-1,n,rear=-1,i;
	while(1)
	{
		printf("\n 1.insert \t 2.delete \t 3.display \t 4.exit ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("\n enter the element to insert ");
				scanf("%d",&n);
				a[++rear]=n;
			    break;
			case 2:
				if(front==rear)
				printf("\n queue empty");
				else
			    front++;
				break;
			case 3:
				if(front==rear)
				printf("\n queue empty");
				else
				{
				printf("\n the queue is \t");
			    for(i=front+1;i<=rear;i++)
				printf("\t %d",a[i]);	
			    }
				break;
			case 4:
				return 0;
				break;
		}
	}
	return 0;
}
 
