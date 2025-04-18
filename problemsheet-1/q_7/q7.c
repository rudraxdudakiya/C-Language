/*
 * q7.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	float KM,Meters,Feets,Inches,Centimeters;
	printf("enter distance in kilometers between 2 cities =");
	scanf("%f",&KM);

	if(KM>0)
	{
		Meters=KM*1000;
		Feets=KM*3280.83;
		Inches=39370.08;
		Centimeters=KM*100000;
		printf("\n distance in Meters is %0.4f \n distance in Feets is %0.4f \n distance in Inches is %0.4f \n distance in Centimeters is %0.4f",Meters,Feets,Inches,Centimeters);
	}
	else
	{
		printf("%f distance entered by user is less than 0",KM);
	}
	return 0;
}

