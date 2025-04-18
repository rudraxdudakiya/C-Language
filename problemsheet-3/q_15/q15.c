/*
 * q15.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int a[row][col],i,j,max;
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
	//row wise largest
	printf("\nmax in row:\n");
	for(i=0;i<row;i++)
	{
		max=a[i][0];
		for(j=0;j<col;j++)
		{
			if(max<a[i][j])
			{
				max=a[i][j];
			}
		}
		printf("%d=%d\n",i+1,max);
	}

	//column wise largest
	printf("max in column:\n");
		for(i=0;i<row;i++)
		{
			max=a[0][i];
			for(j=0;j<col;j++)
			{
				if(max<a[j][i])
				{
					max=a[j][i];
				}
			}
			printf("%d=%d\n",i+1,max);
		}

	return 0;
}
