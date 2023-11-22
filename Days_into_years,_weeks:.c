#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int d=a/365;
    int s=a%365;
    int c=s/7;
    printf("%d
%d",d,c);
}