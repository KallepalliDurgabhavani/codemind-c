#include<stdio.h>
int main()
{
    int n,i,j,m,s=0;
    scanf("%d%d",&m,&n);
    int a[m][n],max=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
     
    for(i=0;i<m;i++)
    {
        s=0;
        for(j=0;j<n;j++)
        {
           s=s+a[i][j];
        }
        if(max<s)
        {
            max=s;
        }
    }
    printf("%d",max);
}