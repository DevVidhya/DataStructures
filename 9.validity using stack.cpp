#include<stdio.h>
#include<string.h>

int main()
{
	char s[30];
	int j,stack[15],top=-1,k=0;
	
	printf("Enter the expression=");
	gets(s);
	
	for(j=0;j<strlen(s);j++)
	{
		if(s[j]=='(')
		{
			top++;
		}
		else if(s[j]==')')
		{
			top--;
		}
		if(top<-1)
		{
			printf("\n Expression is not well formed");
			k=1;
			break;
		}
	}
	
	if(top==-1)
	{
		printf("\nexpression is well formed");
	}
	else if(k==0)
	{
		printf("\nExpression is not well formed");
	}
}	
