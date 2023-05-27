#include<stdio.h>
int main()
{
    float b,c,sur,total;
    int u;
    scanf("%d",&u);
    printf("Units Consumed: %d
",u);
    if(u<199)
    {
        b=u*1.20;
        printf("Cost per Unit: 1.20
");
        printf("Bill: %0.2f
",b);
    }
    else if(u>=200 && u<400)
    {
         b=u*1.40;
        printf("Cost per Unit: 1.40
");
        printf("Bill: %0.2f
",b);
    }
    else if(u>=400 && u<600)
    {
         b=u*1.60;
        printf("Cost per Unit: 1.60
");
        printf("Bill: %0.2f
",b);
    }
    else if(u>=600 && u<800)
    {
        b=u*1.80;
        printf("Cost per Unit: 1.80
");
        printf("Bill: %0.2f
",b); 
    }
    else
    {
         b=u*2.00;
        printf("Cost per Unit: 2.00
");
        printf("Bill: %0.2f
",b);
    }
    if (b>400)
    {
        sur=b*0.15;
        printf("Surcharge: %0.2f
",sur);
    }
    else{
        printf("Surcharge: 0.00
");
    }
    printf("Total Amount: %0.2f",b+sur);
}