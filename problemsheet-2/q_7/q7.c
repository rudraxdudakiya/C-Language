/*
 * q7.c
 *
 *  Created on: 05-Oct-2023
 *      Author: root
 */

#include<stdio.h>
int main()
{
	int day,month,year;
	printf("enter day=");
	scanf("%d",&day);
	printf("enter month=");
	scanf("%d",&month);
	printf("enter year=");
    scanf("%d",&year);

    if(year>1000 && year<9999)
    {
    	if(month>=1 && month<=12)
    	{
    		if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
    		{
    			if(day>=1 && day<=31)
    				printf("valid date");
    			else
    		      printf("invalid date");
    		}
    		else
    		{
    			if(month==4 || month==6 || month==9 || month==11)
    			{
    				if(day>=1 && day<=30)
    					printf("valid date");
    				else
    		        	printf("invalid date");
    			}
    			else
    			{
    				if(month==2)
    				{
    					if(day<=1 && day<=28)
						{
    						printf("valid date");
						}
    					else
    					{
    						if(day>=1 && day<=29)
    						{
    							if(year%4==0)
    							{
    								printf("valid date");
    							}
    							else
    							{
    								printf("invalid date");
    							}
    						}
    						else
    						{
    							printf("invalid date");
    						}
    					}
    				}
    			}

    		}
    	}
    	else
 	   	{
     	 	printf("invalid date");
    	}
    }
    else
    {
      	printf("invalid date");
    }

	return 0;
}
