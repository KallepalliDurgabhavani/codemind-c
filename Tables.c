#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&m,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",m,i,m*i);
        }
    }
}