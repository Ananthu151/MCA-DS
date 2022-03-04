#include<stdio.h>
int adj[20][20];
void main()
{  int vis[20],q[20],k=0,n=0,i,j,ne,s,ver,v,e;
    printf("BFS on undirected connected graph");
    printf("Enter no of vertices");
    scanf("%d",&v);
    for(i=1;i<=v;i++)
    {vis[i]=0;
       for(j=1;j<=v;j++)
          adj[i][j]=0;
     }
    printf("Enter noi: of edjes");
    scanf("%d",&ne);
    printf("enter tyhe adfges");
    printf("\nstart end\n");
    for(i=1;i<=ne;i++)
    {  scanf("%d%d",&s,&e);
      adj[s][e]=1;
      adj[e][s]=1;
     }
 q[n++]=1; 
 vis[1]=1;   
 printf("bfs order ");
 printf("%d ",1);
 while(k<n)  
 { 
    ver=q[k++];
    for(i=1;i<=v;i++)
      { if( adj[ver][i]==1 && vis[i]==0)
         {  vis[i]=1;
            printf("%d ",i);
           q[n++]=i;
          } 
      } 
 } 
 }   
  
     
      
