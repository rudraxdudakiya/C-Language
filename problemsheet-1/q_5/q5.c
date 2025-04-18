/*
 * q5.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	float p,r,n,si;
	printf("enter total_amt,interest_rate,total_of_years\n");
	scanf("%f%f%f",&p,&r,&n);

	si=p*r*n*0.01;
	printf("simple interest = %.2f",si);

	return 0;
}

