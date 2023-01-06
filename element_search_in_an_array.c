#include<stdio.h>
int main()
{
    int n,i,f=0,s;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            f=1;
        }
    }
    if(f==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}