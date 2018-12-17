#include<stdio.h>

int fact(int n)
{
    if(n<=1)
        return 1;
    else
        return n*fact(n-1);
}


int C(int n,int r)
{
    int fact1=fact(n), fact2=fact(n-r), fact3=fact(r);
    return fact1/(fact2*fact3);
}

int main()
{
    int i,j,n,r; int a[100]; char b[100];
    printf("\nenter n::"); scanf("%d",&n);
    printf("\nenter r::"); scanf("%d",&r);
    for(i=0;i<r;i++)
        a[i]=i+1;
    int t=C(n,r);
    printf("%d-combinations in lexicographical order::\n",r);
    while(t)
    {
        for(i=0;i<r;i++)
            printf("%d ",a[i]);
        printf("\n");
        i=0;
        while(a[i]!=n-r+i+1&&i<r)
            i++;
        i--;
        a[i]++;
        for(j=i+1;j<r;j++)
            a[j]=a[i]+j-i;
        t--;
    }
    return 0;

}
