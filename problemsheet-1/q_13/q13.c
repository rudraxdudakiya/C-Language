/*
 * q13.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	float amt,interest_rate;
	printf("enter amt \n");
	scanf("%f",&amt);

	if(amt>=100000)
	{
		interest_rate = amt*0.12;
		printf("interest rate is %.2f",interest_rate);
	}
	else if(amt>=60000)
	{
		interest_rate = amt*0.10;
	    printf("interest rate is %.2f",interest_rate);
	}
	else if(amt>=30000)
	{
		interest_rate = amt*0.08;
		printf("interest rate is %.2f",interest_rate);
	}
	else
	{
		interest_rate = amt*0.072;
		printf("interest rate is %.2f",interest_rate);
	}

	return 0;
}

