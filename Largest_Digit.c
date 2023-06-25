#include<stdio.h>
int main()
{
    int n,i,r=0,max=0;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        if(max<i)
        {
            max=i;
        }
        n=n/10;
    }
    printf("%d",max);
}
