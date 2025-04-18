/*
 * q6.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
    int basic_salary,da,hra,ma,gross;
    printf("ENTER BASIC SALARY =");
    scanf("%d",&basic_salary);

    da=basic_salary*0.4;
    hra=basic_salary*0.2;
    ma=basic_salary*0.05;
    gross=basic_salary+da+hra+ma;

    printf("\ngross_salary=%d",gross);
    return 0;
}

