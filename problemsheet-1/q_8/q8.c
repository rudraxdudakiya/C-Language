/*
 * q8.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
    int p_2013, p_2014, p_2015, p_2016, p_2017, p_2018;
    printf("ENTER Population of 2013 =");
    scanf("%d",&p_2013);

       p_2014=p_2013+(p_2013*0.1);
       p_2015=p_2014-(p_2014*0.1);
       p_2016=p_2015+(p_2015*0.1123);
       p_2017=p_2016;
       p_2018=p_2017-(p_2017*0.042);

   printf("p_2018=%d",p_2018);
    return 0;
}

