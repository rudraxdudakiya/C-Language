/*
 * arr1.c
 *
 *  Created on: 07-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int a[5],i;
	for(i=0;i<5;i++)
	{
		printf("enter values for %d=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\n Address of a[%d]=%u value of a[%d]=%d",i,&a[i],i,a[i]);
	}
	return 0;
}

