#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,i,q=0,r;
    scanf("%f%f",&a,&b);
    for(i=a;i<=b;i++)
    {
        r=sqrt(i);
        q=q+r;
    }
    printf("%0.2f",q);
}