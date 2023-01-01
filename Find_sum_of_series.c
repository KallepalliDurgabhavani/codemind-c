#include<stdio.h>
int main()
{
    int i,num;
    float sum=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i<num)
        {
        }
        sum=sum+(float)1/i;
    }
    printf("%0.2f",sum);
    return 0;
}