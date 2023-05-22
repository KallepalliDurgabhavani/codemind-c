#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n],c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        c=i;
    }
    printf("%d",c);
}