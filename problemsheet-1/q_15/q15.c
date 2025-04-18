/*
 * q15.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int year;
	float r;
	printf("enter year\n");
	scanf("%d",&year);
	r=year%4;
	if(r==0)
	{
		printf("%d is a leap year",year);
	}
	else
	{
		printf("%d is not a leap year",year);
	}
	return 0;
}

