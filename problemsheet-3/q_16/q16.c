/*
 * q16.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int a[row][col],i,j,min;
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
	//row wise smallest
	printf("smallest in row:\n");
	for(i=0;i<row;i++)
	{
		min=a[i][0];
		for(j=0;j<col;j++)
		{
			if(min>a[i][j])
			{
				min=a[i][j];
			}
		}
		printf("%d=%d\n",i+1,min);
	}

	//column wise smallest
	printf("smallest in column:\n");
		for(i=0;i<row;i++)
		{
			min=a[0][i];
			for(j=0;j<col;j++)
			{
				if(min>a[j][i])
				{
					min=a[j][i];
				}
			}
			printf("%d=%d\n",i+1,min);
		}

	return 0;
}

