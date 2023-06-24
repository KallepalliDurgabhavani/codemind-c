#include<stdio.h>
int main()
{
    int n,i,s=0,t,m;
    scanf("%d",&m);
    t=m;
    n=m*m;
    while(n!=0)
    {
        i=n%10;
        s=s+i;
        n=n/10;
    }
    if(s==t)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}