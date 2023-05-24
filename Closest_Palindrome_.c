#include<stdio.h>
int palindrome(int n)
{
    int r,sum=0,temp;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    if(sum==temp)
      return 1;
    else
       return 0;
}
int main()
{
    int n,d1,d2,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(palindrome(i))
          {
              d1=i-n;
              break;
          }
    }
    for(i=n-1;;i--)
    {
        if(palindrome(i))
         {
             d2=n-i;
             break;
         }
    }
    if(d1==d2)
    {
       printf("%d %d",n-d1,n+d2);   
    }
      
    else if(d1>d2)
    {
        printf("%d",n-d2);
    }
      
    else
    {
       printf("%d",n+d1);   
    }
      

    return 0;
}