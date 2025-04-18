/*
 * marksheet.c
 *
 *  Created on: 28-Aug-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float per;
	printf("enter marks of 101,102,103,104,105");
	scanf("%d%d%d%d%d" ,&m1,&m2,&m3,&m4,&m5);
    total=m1+m2+m3+m4+m5;
    per=(float)total/5;
    printf("\nTotal=%d \nPercentage=%f\n ",total,per);
    if(per>=70)
    {
    	printf("distrinction");
    }
    else
    {
    	if(per>=60)
    	{
    		printf("first class");
    	}
    	else
    	{
    		if(per>=50)
    		{
    			printf("second class");
    		}
    		else
    		{
    			if(per>=40)
    			{
    				printf("pass class");
    			}
    			else
    			{
    				printf("fail");
    			}
    		}
    	}
    }
	return 0;
}




