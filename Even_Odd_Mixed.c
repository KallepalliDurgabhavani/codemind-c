#include<stdio.h>
int main()
{
    int n,i,s=0,e=0,o=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s=s+1;
        n=n/10;
        if(r%2==0)
        {
            e=e+1;
        }
        else
        {
            o=o+1;
        }
    }
    if(e==s)
    {
        printf("Even");
    }
    else if(o==s)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}
    