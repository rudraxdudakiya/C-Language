/*
 * 2d-2.c
 *
 *  Created on: 07-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define row 2
#define col 3
int main()
{
	int a[row][col],i,j,min,max;

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
			printf("\t%d",a[i][j]);
		}
		printf("\n");
	}

	min=a[0][0];
	max=a[0][0];

	for(i=0;i<row;i++)
	{
			for(j=0;j<col;j++)
			{
				if(min>a[i][j])
				{
					min=a[i][j];
				}
			}
	}
	printf("\n smallest element=%d",min);
		for(i=0;i<row;i++)
		{
				for(j=0;j<col;j++)
				{
					if(max<a[i][j])
					{
						max=a[i][j];
					}
				}
		}
		printf("\n largest element=%d",max);

	return 0;
}
