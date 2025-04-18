#include<stdio.h>
int main()
{
    float k,a,b,c,y,x,z; 
    printf("enter values of\n");
    printf("a=");
    scanf("%f",&a);
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    printf("y=");
    scanf("%f",&y);
    z=(a*a)+(2*a*b)-c;
    x=(b*b)-(2*z)-2*a*c;
    k=y-z+(5*x)-(2*y*b);
    printf("k=%f",k);
    return 0;
}