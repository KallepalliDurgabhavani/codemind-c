#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          scanf("%d",&a[i][j]);  
        }   
    }
    int c=0,s=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
          if(i%2==0)
          {
              s=s+a[i][j];
          }
          else
          {
              c=c+a[i][j];
          }
        }   
    }
    printf("%d %d",s,c);
}