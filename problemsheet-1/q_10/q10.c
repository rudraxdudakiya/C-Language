/*
 * q10.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	float a,b,c,y,z,x,k;
	printf("Enter value for a , b , c & y =");
	scanf("%f%f%f%f",&a,&b,&c,&y);

    z = (a*a) + (2*a*b) - c;

    x = (b*b) - (2*z) - (2*a*c);

    k = y - z - (5*x) + (2*y*b);

    printf("\n%0.2f",k);

	return 0;
}

