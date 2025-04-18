/*
 * q9.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	float temperature,centigrade;
	printf("enter temperature in fahrenheit\n");
	scanf("%f",&temperature);

	centigrade=(temperature - 32) * 5/9;
	printf("temperature in centigrade is %.2f",centigrade);

	return 0;
}


