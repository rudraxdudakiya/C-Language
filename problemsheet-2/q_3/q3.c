/*
 * q3.c
 *
 *  Created on: 23-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{

	int i,a,b,j=0;
	printf("enter number & divisor=");
	scanf("%d %d",&a,&b);

	if(b!=0)
	{
		for(i=1;a>=b;i++)
		{
			a=a-b;
			j++;
		}
		printf("%d",j);
		printf("\nreminder is %d ",a);
	}
	else
	{
		printf("division by zero is not posible");
	}
	return 0;
}
