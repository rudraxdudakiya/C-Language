/*
 * q6.c
 *
 *  Created on: 23-Sep-2023
 *      Author: root
 */

#include<stdio.h>
int main()
{
	int n,count;
	printf("enter number=");
	scanf("%d",&n);

	for(count=0;n>0;count++)
	{
		n=n/10;
	}
	printf("count=%d",count);

	return 0;
}

