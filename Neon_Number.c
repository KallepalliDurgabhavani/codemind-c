#include<stdio.h>
int main()
{
    int n,i,s=0,q,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        q=n*n;
    }
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        q=q/10;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}