/*
 * q18.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */



#include<stdio.h>
#define row 3
#define col 3
int main()
{
	int a[row][col],i,j,k;
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


	int temp;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col-1;j++)
		{
			for(k=j+1;k<col;k++)
			{
				if(a[j][i]>a[k][i])
				{
					temp=a[j][i];
					a[j][i]=a[k][i];
					a[k][i]=temp;
				}
			}
		}
	}
	printf("Array after sorting(column wise):\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}

	return 0;
}
