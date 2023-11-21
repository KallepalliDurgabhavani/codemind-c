#include<stdio.h>
int main()
{
    int n,i,s=0,c=1;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        s=s+i;
        c=c*i;
        n=n/10;
    }
    printf("%d",c-s);
}