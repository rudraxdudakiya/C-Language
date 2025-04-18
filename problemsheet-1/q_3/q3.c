/*
 * q3.c
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

	if(h<0)
	{
		printf("working hours can not be negative");
	}
	else
	{
		if(h<=40)
		{
			r = h*2.5;
			printf("payment in rupee is %.2f",r);
		}
		else if(h<=45)
		{
			f = h-40;
			r = 40*2.5 + f*7;
			printf("payment in rupee is %.2f",r);
		}
		else if(h<=50)
		{
			f = h-40;
			r = 40*2.5 + f*8.5;
			printf("payment in rupee is %.2f",r);
		}
		else
		{
			f = h-40;
			r = 40*2.5 + f*12;
			printf("payment in rupee is %.2f",r);
		}
	}
	return 0;
}



