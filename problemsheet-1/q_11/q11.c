/*
 * q11.c
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
		if(exp>=3)
		{
			printf("bonus rs.5000");
		}

	   else
		{
			printf("no bonus");
		}
	}
	return 0;
}


