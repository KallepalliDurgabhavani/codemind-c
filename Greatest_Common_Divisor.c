#include<stdio.h>
int main()
{
    int m,n,max,i;
    scanf("%d%d",&m,&n);
     for( i = 1; i <= m && i <= n; ++i)  
    {  
        if (m % i ==0 && n % i == 0)  
            max= i;
    }
    printf("%d",max);
}