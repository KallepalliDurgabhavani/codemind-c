#include<stdio.h>
int main()
{
    int n,c=0,s=0,o=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        c=c+1;
        if(r%2==0)
        {
            s++;
        }
        else if(r%2!=0)
        {
            o++;
        }
        n=n/10;
    }
    if(c==s)
    {
        printf("Even");
    }
    else if(c==o)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}