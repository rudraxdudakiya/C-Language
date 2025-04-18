#include<stdio.h>
int main()
{
    float f,d;
    printf("enter temperature of city in fahrenheit=");
    scanf("%f",&f);
    d=(f-32)*5/9;
    printf("temperature in centigrade degree=%f\n",d);
    
    if(d>=40)
        printf("Very Hot");
    
    else if(d>=37)
        printf("Hot");

    else if(d>=34)
        printf("Warm");

    else
        printf("cool");
    return 0;
}