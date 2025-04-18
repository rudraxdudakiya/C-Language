#include<stdio.h>
int main()
{
    float wh,oh,payment;
    printf("enter the no. of worked hours=");
    scanf("%f",&wh);

    if(wh<=48)
    {
        payment=wh*50;
        printf("payment=%f",payment);
    }
    else
    {
        oh=wh-48;
        printf("overtime hour=%.2f\n",oh);
        if(oh<=5)
        {
            payment=2400+oh*70;
        }
        else if(oh<=10)
        {
            payment=2400+oh*85;
        }
        else if(oh>10)
        {
            payment=2400+oh*120;
        }
        printf("payment=%f",payment);
    }
    return 0;
}