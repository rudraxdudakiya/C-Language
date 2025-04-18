/*
 * q8.c
 *
 *  Created on: 05-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int day,month,year,add,i;
	printf("enter day=");
	scanf("%d",&day);
	printf("enter month=");
	scanf("%d",&month);
	printf("enter year=");
    scanf("%d",&year);
    printf("enter days to add=");
    scanf("%d",&add);

    for(i=0;i<add;i++)
    {
    	day++;
    	if(month==1|| month==3 || month==5 || month==7 || month==8 || month==10)
    	{
    		if(day>31)
    		{
    			month++;
    			day=1;
    		}
    		else
    			continue;
    	}
    	else
    	{
    		if(month==4 || month==6 || month==9 || month==11)
    		{
    			if(day>30)
    			 {
    			  	month++;
    				day=1;
    			 }
    			else
    			   	continue;
    		}
    		else
    		{
    			if(month==2)
				{
    				if(year%4==0)
    				{
    					if(day==29)
    					{
    						month++;
    						day=1;
    					}
    					else
    						continue;
    				}
    				else
    			    {
    					if(day==28)
    					{
    						month++;
    						day=1;
    					}
    					else
    						continue;
    				}
				}
    			else
				{
    				if(month==12)
    				{
    					if(day>31)
    					{
    						day=1;
    						month=1;
    						year++;
    					}
    					else
    						continue;
    				}
    				else
    					continue;
				}
    		}
    	}
    }
    printf("%d/%d/%d",day,month,year);
    return 0;
}
