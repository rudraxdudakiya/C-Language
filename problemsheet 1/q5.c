#include<stdio.h>
int main()
{
    float p,r,n,si;
    
    printf("enter amount,interest rate,number of years=");
    scanf("%f%f%f" ,&p,&r,&n);

    si = p*r*n*0.01;
    printf("simple rate=%0.2f",si);
    return 0;
}