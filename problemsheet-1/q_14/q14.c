/*
 * q14.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	float temp;
	printf("enter temperature \n");
	scanf("%f",&temp);
	if(temp>=40)
	{
		printf("very hot");
	}
	else if(temp>=37)
	{
		printf("hot");
	}
	else if(temp>=34)
	{
		printf("warm");
	}
	else
	{
		printf("cool");
	}
	return 0;
}
