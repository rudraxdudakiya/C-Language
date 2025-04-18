/*
 * q19.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int a[row][col],i,j,sum;
	//taking input of 2d array
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	//printing 2d array
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<row;i++)
	{
		sum=0;
		for(j=0;j<col;j++)
		{
			sum=sum+a[i][j];
		}
		printf("sum of %dth row=%d\n",i+1,sum);
	}
	return 0;
}
