#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int se,c=0;
    scanf("%d",&se);
    for(i=0;i<n;i++)
    {
        if (a[i]==se)
        {
            c++;
        }
    }
    if(c==0)
    {
        printf("False");
    }
    else{
        printf("True");
    }
}