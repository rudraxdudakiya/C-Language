#include<stdio.h>
int main()
{
    int wh,oh;
    float payment;
    printf("enter the working hour=");
    scanf("%d",&wh);

    if(wh>168)
    {
        printf("working hour more than 168 is not possible in a week");
        return 0;
    }
    else
    {
        if(wh<=40)
        {
            payment = wh*2.50;
        }
        else
        {
            oh = wh-40;
            if(oh<=5)
            {
                payment = (oh*7.00)+100;
            }
            else
            {
                if(oh<=10)
                {
                    payment = (oh*8.50)+100;
                }
                else
                {
                    payment = (oh*12.00)+100;
                }
            }
        }
    printf("payment = %.2f",payment);
    }
    
    return 0;
}