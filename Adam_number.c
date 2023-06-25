#include<stdio.h>
int rev(int n)
{
    int r=0,p;
    while(n!=0)
    {
        p=n%10;
        r=r*10+p;
        n=n/10;
    }
    return r;
}
int main()
{
    int n,s,rs,sq;
    scanf("%d",&n);
    s=n*n;
    rs=rev(n);
    sq=rs*rs;
    if(rev(sq)==s)
    {
        printf("True");
    }
    else{
        printf("False");
    }
}