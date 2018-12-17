#include<stdio.h>
#include<string.h>

int priority(char ch)
{
	if(ch=='+'||ch=='-')
	return 1;
	else if(ch=='*'||ch=='/')
	return 2;
	else if(ch=='^')
	return 3;
}

int main()
{
	char infix[100],post[100],stack[100],prefix[100];
	int k=-1,n,i,j=0;
	
	printf("\n enter the infix expression ");
	gets(infix);
	
	n=strlen(infix);
	strrev(infix);
	puts(infix);
	
	for(i=0;i<=n;i++)
	{
		if(infix[i]=='(')
		infix[i]=')';
		else if(infix[i]==')')
		infix[i]='(';
	}
	
	for(i=0;i<n;i++)
	{
		if(rev[i]>='A'&&rev[i]<='Z')
		{
			post[j++]=infix[i];
		}
		else
		{
			if(infix[i]=='(')
			stack[++k]=infix[i];
			else if(infix[i]==')')
			{
				while(stack[k]!='(')
				{
					post[j++]=stack[k--];
				}
				k--;
			}
			else 
			{
				
				while(priority(infix[i])<=priority(stack[k])&&stack[k]!='(')
				post[j++]=stack[k--];
				stack[++k]=infix[i];
			}
		}
	}
	
	while(k>=0)
	post[j++]=stack[k--];
	
	while(j>=0)
	printf("%c",post[j--]);
	return 0;
}
