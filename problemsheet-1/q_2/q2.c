/*
 * q2.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int cy,jy,exp;
	printf("enter cy&jy =");
	scanf("%d%d",&cy,&jy);

	if(cy<jy)
	{
		printf("cy can not be less than jy");
	}
	else
	{
		exp = cy-jy;
		printf("exp=%d\n",exp);
		if(exp>=7)
		{
			printf("bonus Rs.5000");
		}
		else if(exp>=4)
		{
			printf("bonus Rs.3000");
		}
		else if(exp>=1)
		{
			printf("bonus Rs.1000");
		}
		else
		{
			printf("no bonus");
		}
	}
	return 0;
}


