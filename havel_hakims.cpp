#include<iostream>
using namespace std;

int degcount(int* d,int n)
{
	int count=0;
	for(int i=0;i<n;i++)
	if(d[i]%2==1)
	count++;
	return count;
}

void inssort(int* a,int n,int s)
{
	int i,j,key;
		for(i=s+1;i<n;i++)
	{
		key=a[i];
		for(j=i-1;j>=0&&a[j]<key;j--)
		{
			a[j+1]=a[j];
		}
		a[j+1]=key;
	}
	
}

int main()
{
	int n,s=0;
	cout<<"\nnumber of vertices:"; cin>>n;
	int d[n];
	cout<<"\ndegree sequence:";
	for(int i=0;i<n;i++)
	cin>>d[i];
	for(int i=0;i<n;i++)
	if(d[i]>n||degcount(d,n)%2==1)
	{
		cout<<"\nnot possible!"; return 0;
	}
	while(s<n)
	{
		for(int j=s;j<n;j++)
		if(d[j]<0)
		{
			cout<<"\nnot possible!"; return 0;
		}
		int flag=0;
		for(int j=s;j<n;j++)
		if(d[j]!=0)
		{
			flag=1;
		}
		if(flag==0)
		{
		cout<<"\npossible!"; return 0;
		}
		inssort(d,n,s);
		int k=d[s];
		while(k)
		{
				d[s+k]-=1;
				k--;
		}	
		s++;
		}
	return 0;
}
