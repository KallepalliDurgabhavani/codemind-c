#include<stdio.h>
int main()
{
    int n,i,q,r;
    scanf("%d",&n);
      q=n*(n+1)/2;
      i=q*q;
      r=n*(n+1)*(2*n+1)/6;
      printf("%d",i-r);
}