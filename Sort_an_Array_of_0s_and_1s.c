#include<stdio.h>
void sort(int a[],int n)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c++;
        }
    }
    for(int i=0;i<c;i++)
    {
        a[i]=0;
    }
    for(int i=c;i<n;i++)
    {
        a[i]=1;
    }
}
void print(int a[],int n)
{
   for(int i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
}
int main()
{
    int a[100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,n);
    print(a,n);
    return 0;
}