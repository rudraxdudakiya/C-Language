/*
 * q12.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	float h,r,f;
	printf("enter working hours\n");
	scanf("%f",&h);
	if(h<0 )
		{
			printf("working hours can not be negative");
		}
	else
	{
		if(h>168)
		{
			printf("working hours more than 168 in a week is not possible");
		}
		else
		{
			if(h<=48)
			{
				r = h*50;
				printf("payment is %.2f",r);
			}
			else if(h<=53)
			{
				f = h-48;
				r = 48*50 + f*70;
				printf("payment is %.2f",r);
			}
			else if(h<=58)
			{
				f = h-48;
				r=48*50 + f*85;
				printf("payment is %.2f",r);
			}
			else
			{
				f = h-48;
				r=48*50 + f*120;
				printf("payment is %.2f",r);
			}
		}

	}
	return 0;
}


