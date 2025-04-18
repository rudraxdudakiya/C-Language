/*
 * q21.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int a[row][col],i,j,sum=0;
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
		for(j=0;j<col;j++)
		{
			sum=sum+a[i][j];
		}
	}
	printf("sum of all elements of arry:\n%d",sum);
	return 0;
}


