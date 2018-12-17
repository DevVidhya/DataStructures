#include<stdio.h>
#include<conio.h>

int n;
int b[100],finalPath[100];
int ajMat[100][100];
int fp=0,count=0;


void displayPath()
{
     int i;
     for(i=0;i<fp;i++)
     {
       printf("%d ->",finalPath[i]);
     }
}


int getDegree(int node)
{
    int j,deg=0;
    int pos=getIndex(node);
    for(j=0;j<n;j++)
    {
      if(ajMat[pos][j]==1) deg++;
    }
    return deg;
}


int findRoot()
{
     
     int i,cur=1;
     for(i=0;i<n;i++)
     {
        if(getDegree(b[i])%2!=0)
        {
           count++;
           cur=i;
        }
     }
     
     if(count!=0 && count!=2)
     {
        return 0;
     }
     else return b[cur];
}

int getIndex(int node)
{
    int k=0;
    while(node!=b[k])
    k++;
     
    
   
    return k;
}

int isLastNode(int node)
{
    int i=0;
    int degSum=0;
    for(i=0;i<n;i++)
    {
     degSum=degSum+getDegree(b[i]);
    }
    if(degSum==2)
      return 1;
    else
      return 0;
}

int getNextNode(int node)
{
    int i=0;
    int pos=getIndex(node);
         
    for(i=0;i<n;i++)
    {    
      if(ajMat[pos][i]==1)
      {         
        if(!isHasOneEdge(b[i]))
        {
          return b[i];
        }
        else
        {
            if(isLastNode(b[i]))
            return b[i];
        }
      }
    }
    return -1;
}

int isHasOneEdge(int node)
{   
    if(getDegree(node)==1)
      return 1;
    else
      return 0;
}

int isCompleted()
{
    int i=0;
    for(i=0;i<n;i++)
    {
        if(getDegree(b[i])>0)
             return 0;
    }
    return 1;
}

void removeEdge(root,eNode)
{
     int pos1=0,pos2=0;     
     pos1=getIndex(root);
     pos2=getIndex(eNode);
     ajMat[pos1][pos2]=0;
     ajMat[pos2][pos1]=0;
}


void eularFind(int root)
{    
     int eNode;
     while(!isCompleted())
     {
        eNode=getNextNode(root);       
        finalPath[fp++]=eNode;     
        removeEdge(root,eNode);   
        root=eNode; 
     }
    
}

void printbArray()
{
     int i;
      for( i=0; i<n; i++)
    {
     printf("%d  ",b[i]);
    }
}
int main()
{
    int v;
    int i,j,l;
    printf("Enter the number of nodes in a graph\n");
    scanf("%d",&n);
    printf("Enter the value of node of graph\n");
    for( i=0; i<n; i++)
    {
     scanf("%d",&b[i]);
    }
   
    
    
    printf("Enter the value in adjancency matrix in form of 1 or 0\n");
    printf("\nIf there is an edge between the two vertices then enter 1 else 0\n");
    for( i=0; i<n; i++)
    printf(" %d ",b[i]);
    for( i=0;i<n; i++)
    {
     printf("\n%d ",b[i]);
     for( j=0; j<n; j++)
     {scanf("%d",&v);
      
      ajMat[i][j]=v;
     }
      printf("\n\n");
    }
   

 
    int root,pos;
    if(root=findRoot())
    {
      if(count) printf("Available Euler Path is\n");
      else printf("Available Euler Circuit is\n");
      finalPath[fp++]=root;
      eularFind(root);
      displayPath();
    }
    else printf("Euler path or circuit not available\n");
    
}
