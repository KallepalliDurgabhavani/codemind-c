#include<stdio.h>
int main()
{
    int n,t,i,r=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
           r=r+i; 
        }
    }
    if(n==r)
    {
        printf("PERFECT");
    }
    else if(r>n)
    {
        printf("ABUNDANT");
    }
    else
    {
        printf("DEFICIENT");
    }
}