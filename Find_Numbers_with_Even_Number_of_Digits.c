#include<stdio.h>
int num(int n){
    int r=0,s;
    while(n!=0)
    {
        s=n%10;
        r++;
        n=n/10;
    }
    if(r%2==0)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int a[n],v;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        v=num(a[i]);
        if(v==1)
        {
            s++;
        }
    }
    printf("%d",s);
}