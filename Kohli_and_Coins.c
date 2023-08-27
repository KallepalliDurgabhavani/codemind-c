#include<stdio.h>
int main()
{
    int n,s;
    scanf("%d",&n);
    if(n%5!=0)
    {
        printf("-1");
    }
    else if(n%10==0)
    {
        printf("%d",int(n/10));
    }
    else
    {
        s=n%10;
        int c=n/10;
        printf("%d",int(s/5)+c);
    }
}