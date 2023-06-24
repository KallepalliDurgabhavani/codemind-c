#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,s=1,j;
        scanf("%d",&m);
        for(j=1;j<=m;j++)
        {
            s=s*j;
        }
        printf("%d
",s);
    }
}