#include<stdio.h>
int main()
{
    int a,b,c,n,i;
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d %d ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d ",c);
    }
}