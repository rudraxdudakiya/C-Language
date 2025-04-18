#include<stdio.h>
int main()
{
    int p13,p14,p15,p16,p17,p18;
    printf("enter the population of year 2013=");
    scanf("%d",&p13);
    p14=p13+(p13*0.10);
    p15=p14-(p14*0.10);
    p16=p15+(p15*0.1123);
    p17=p16;
    p18=p17-(p17*0.042);
    printf("population at the end of 2018=%d",p18);
    return 0;
}