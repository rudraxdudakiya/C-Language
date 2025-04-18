#include<stdio.h>
int main()
{
    int day, month, year;
    int n;
    printf("Day: ");
    scanf("%d",&day);
    printf("Month: ");
    scanf("%d",&month);
    printf("Year: ");
    scanf("%d",&year);
    printf("No. of days you want to add: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        day++;
          if((month==1)||(month==3)||(month==5)||(month==7)||(month==8)||(month==10))
            {
                if(day>31)
                {
                    month++;
                    day=1;
                }
                else
                {
                    continue;
                }
           }
          else if((month==4)||(month==6)||(month==9)||(month==11))
             {
                if(day>30)
                {
                    month++;
                    day=1;
                }
                else
                {
                    continue;
                }
           }
          else if(month==2)
            {
                if((year%4)==0)
                {
                    if(day>29)
                        {
                            month++;
                            day=1;
                        }
                    else
                        {
                            continue;
                        }
                }
                else
                {
                    if(day>28)
                        {
                            month++;
                            day=1;
                        }
                    else
                        {
                            continue;
                        }
                    
                }
            }
          else if(month==12)
            {
                if(day>31)
                {
                    day=1;
                    month=1;
                    year++;
                }
                else
                {
                    continue;
                }
            }
          else
          {
              continue;
          }
    }
  
    printf("%d-%d-%d",day,month,year);
    return 0;
}