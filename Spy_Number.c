#include<stdio.h>
int main()
{
    int n,i,s=0,r=1,a;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        s=s+a;
        r=r*a;
        n=n/10;
    }
    if(s==r)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}