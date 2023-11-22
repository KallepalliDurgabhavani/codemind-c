#include<stdio.h>
int main()
{
    float avg;
    int a,b;
    scanf("%d%d",&a,&b);
    avg=(a+b)*0.5;
    printf("Average of %d and %d is: %0.2f",a,b,avg);
}