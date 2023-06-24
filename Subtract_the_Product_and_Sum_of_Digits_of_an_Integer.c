#include<stdio.h>
int main()
{
    int n,i,s=0,c=1,d;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        s=s+i;
        c=c*i;
        n=n/10;
    }
    if(s>c)
    {
        printf("%d",s-c);
    }
    else
    {
        printf("%d",c-s);
    }
}