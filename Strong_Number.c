#include<stdio.h>
int rev(int n)
{
    int e=1,i;
    for(i=1;i<=n;i++)
    {
        e=e*i;
    }
    return e;
}
int main()
{
    int n,i,p=0,t,s=0;
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        i=n%10;
        s=s+rev(i);
        n=n/10;
    }
    if(s==t)
    {
        printf("The number %d is a strong number",t);
    }
    else
    {
        printf("The number %d is not a strong number",t);
    }
    
}