#include<stdio.h>
int main()
{
    char s[100];
    int i;
    scanf("%s",&s);
    for (i=0;s[i]!=NULL;i++)
    {
        if(s[i]=='6')
        {
            s[i]='9';
            break;
        }
    }
    printf("%s",s);
}
