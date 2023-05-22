#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int z,c=0;
    scanf("%d",&z);
    for(i=0;i<n;i++)
    {
        if(a[i]==z)
        {
            c++;
        }
    }
    printf("%d",c);
}