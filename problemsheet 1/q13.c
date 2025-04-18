#include<stdio.h>
int main()
{
    float amt,interest;
    printf("enter the amount=");
    scanf("%f",&amt);

    if(amt>100000)
        interest=amt*0.12;
    
    else if(amt>=60000)
        interest=amt*0.1;
    
    else if(amt>=30000)
        interest=amt*0.08;
    
    else if(amt<30000)
        interest=amt*0.072;

    printf("interest=%f",interest);                                
    return 0;
}