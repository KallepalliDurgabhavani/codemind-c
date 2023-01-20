#include<stdio.h>
int main()
{
    int n,r,rev,s=0,t=1;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        t=t*r;
        n=n/10;
    }
    rev=t-s;
    printf("%d",rev);
}