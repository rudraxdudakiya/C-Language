/*
 * 2d.c
 *
 *  Created on: 07-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define row 2
#define col 3
int main()
{
	int a[row][col],i,j;

	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("enter elements for [%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("\n a[%d][%d]=%d \t Address=%u",i,j,a[i][j],&a[i][j]);
		}
	}
	return 0;
}
