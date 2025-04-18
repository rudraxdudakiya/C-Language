/*
 * q14.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */

#include<stdio.h>
#define row 4
#define col 3
int main()
{
	int a[row][col],b[row][col],c[row][col],i,j;

	//taking input of first matrix
		printf("enter element of matrix A:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("a[%d][%d]=",i,j);
				scanf("%d",&a[i][j]);
			}
		}
	//printing matrix A
		printf("element of matrix A:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",a[i][j]);
			}
			printf("\n");
		}

	//taking input of second matrix
		printf("enter element of matrix B:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("b[%d][%d]=",i,j);
				scanf("%d",&b[i][j]);
			}
		}
	//printing matrix B
		printf("element of matrix B:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",b[i][j]);
			}
			printf("\n");
		}


	//Addition of matrices
		printf("\nAddition of A and B:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				c[i][j]=a[i][j]+b[i][j];
			}
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}


	//Subtraction of matrices
		printf("\nSubtraction of A and B:\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				c[i][j]=a[i][j]-b[i][j];
			}
		}
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}

	return 0;
}
