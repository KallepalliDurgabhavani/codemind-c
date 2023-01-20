#include<stdio.h>
int main()
{
    int n,i,s=0,t=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+r;
        t=t*r;
        n=n/10;
    }
    printf("%d",t-s);
}