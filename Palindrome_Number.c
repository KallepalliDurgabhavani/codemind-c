#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int m,rev=0,r,temp;
        scanf("%d",&m);
        temp=m;
        while(m!=0)
        {
            r=m%10;
            rev=rev*10+r;
            m=m/10;
        }
        if(temp==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
    
}