/*
 * q2.c
 *
 *  Created on: 23-Sep-2023
 *      Author: root
 */

#include<stdio.h>
int main()
{
	int n,i=1,fact=1;
	printf("enter a positive number=");
	scanf("%d",&n);

	if(n>0)
	{
		while(i<=n)
		{
			fact = fact*i;
			i++;
		}
	printf("factorial is %d",fact);
	}
	else
	{
		printf("%d is a negative number",n);
	}
	return 0;
}
