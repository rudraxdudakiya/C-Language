#include<stdio.h>
int main()
{
    float basic_salary,da,ma,hra,gross;
    printf("enter basic salary=");
    scanf("%f",&basic_salary);
    da=basic_salary*0.4;
    hra=basic_salary*0.2;
    ma=basic_salary*0.05;
    gross=basic_salary+da+hra+ma;
    printf("gross salary=%.2f",gross);
    return 0;
}