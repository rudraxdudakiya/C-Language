#include<stdio.h>
int main()
{
    int day,month,year;
    printf("enter dd/mm/yy=");
    scanf("%d%d%d",&day,&month,&year);
    if(year>=0001 && year<=9999)
    {
        if(month>0 && month<=12)
        {
            if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
            {
                if(day>0 && day<=31)
                {
                    printf("valid date");
                }
                else
                {
                    printf("invalid");
                }
            }
            else if(month==4 || month==6 || month==9 || month==11)
            {
                if(day>0 && day<=30)
                {
                    printf("valid date");
                }
                else
                {
                    printf("invalid");
                }
            }
            else if(month==2)
            {
                if(day==29)
                {
                    if(year%2==0)
                    {
                        printf("valid date");
                    }
                    else
                    {
                        printf("invalid");
                    }
                }
                else if(day>0 && day<=28)
                {
                    printf("valid");
                }
                else
                {
                    printf("invalid");
                }
            }
        }
        else
        {
            printf("invalid");
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}