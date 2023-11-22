#include<stdio.h>
int main()
{
    char s;
    scanf("%c",&s);
    if(s>='A' && s<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(s>='a' && s<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
}
}