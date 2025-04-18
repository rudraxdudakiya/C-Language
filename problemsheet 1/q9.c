#include<stdio.h>
int main()
{
    float f,d;
    printf("enter temperature of city in fahrenheit=");
    scanf("%f",&f);
    d=(f-32)*5/9;
    printf("temperature in centigrade degree=%f",d);
    return 0;
}