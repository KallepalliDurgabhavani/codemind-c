#include<stdio.h>
int rev(int n)
{
    int r,s=0;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int s=n*n;
    int re=rev(n);
    int sq=re*re;
    if(s==rev(sq))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}