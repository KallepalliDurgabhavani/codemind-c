#include<stdio.h>
int main()
{
    int n,h,m,s;
    scanf("%d",&n);
    h=n/3600;
    int ho=n%3600;
    m=ho/60;
    int se=ho%60;
    printf("H:M:S-%d:%d:%d",h,m,se);
    
}