#include<stdio.h>
#include<string.h>

int main()
{
	char prefix[100];
	int top=-1,i,n,stack[100],result;
	
	printf("\n enter the prefix expression to evaluate ");
	gets(prefix);
	
	n=strlen(prefix);
	
	for(i=n-1;i>=0;i--)
	{
		if(prefix[i]>='0'&&prefix[i]<='9')
		{
			if(prefix[i]=='0')
			stack[++top]=0;
			else if(prefix[i]=='1')
			stack[++top]=1;
			else if(prefix[i]=='2')
			stack[++top]=2;
			else if(prefix[i]=='3')
			stack[++top]=3;
			else if(prefix[i]=='4')
			stack[++top]=4;
			else if(prefix[i]=='5')
			stack[++top]=5;
			else if(prefix[i]=='6')
			stack[++top]=6;
			else if(prefix[i]=='7')
			stack[++top]=7;
			else if(prefix[i]=='8')
			stack[++top]=8;
			else if(prefix[i]=='9')
			stack[++top]=9;
		}
		else if(prefix[i]=='^')
		{
			result=stack[top]^stack[top-1];
			stack[--top]=result;
		}
		else if(prefix[i]=='+')
		{
			result=stack[top]+stack[top-1];
			stack[--top]=result;
		}
		else if(prefix[i]=='-')
		{
			result=stack[top]-stack[top-1];
			stack[--top]=result;
		}
		else if(prefix[i]=='*')
		{
			result=stack[top]*stack[top-1];
			stack[--top]=result;
		}
		else if(prefix[i]=='/')
		{
			result=stack[top]/stack[top-1];
			stack[--top]=result;
		}
	}
	
	printf("\n the value is %d ",stack[0]);
	return 0;
}
