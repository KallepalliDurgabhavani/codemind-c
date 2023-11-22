#include<stdio.h>
int main()
{
    int a,b,h;
    float area;
    scanf("%d%d%d",&a,&b,&h);
    area=0.5*h*(a+b);
    printf("%0.4f",area);
}