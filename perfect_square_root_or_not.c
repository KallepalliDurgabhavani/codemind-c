#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=sqrt(n);
        if(n==c*c)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        break;
    }
    
    
}