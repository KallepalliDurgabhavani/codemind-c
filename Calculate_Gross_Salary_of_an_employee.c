#include<stdio.h>
int main()
{
    float ba,hra,da,pf,s;
    scanf("%f%f%f",&ba,&hra,&da);
    pf=ba*0.12;
    s=hra+ba+da+pf;
    printf("%0.2f
%0.2f",pf,s);
}