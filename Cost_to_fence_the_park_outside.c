#include<stdio.h>
int main()
{
    int l,b,w,c,la,sa,a;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    sa=l*b;
    la=(l+w+w)*(b+w+w);
    a=(la-sa)*c;
    printf("%d",a);
}