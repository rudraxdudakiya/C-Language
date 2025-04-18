/*
 * q14-2.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
#define row 4
#define col 3
int main()
{
	int a[row][col],b[col][row],c[row][row],t[col][row],i,j,sum,k;

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
			for(i=0;i<col;i++)
			{
				for(j=0;j<row;j++)
				{
					printf("b[%d][%d]=",i,j);
					scanf("%d",&b[i][j]);
				}
			}
		//printing matrix B
			printf("element of matrix B:\n");
			for(i=0;i<col;i++)
			{
				for(j=0;j<row;j++)
				{
					printf("%d\t",b[i][j]);
				}
				printf("\n");
			}
		//Multiplication of matrices
		for(i=0;i<row;i++)
		{
			for(j=0;j<row;j++)
			{
				sum=0;
				for(k=0;k<col;k++)
				{
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
			}
		}
		printf("\n Multiplication of matrices\n");
		for(i=0;i<row;i++)
		{
			for(j=0;j<row;j++)
			{
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}

		//transpose of A
		for(i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
			{
				t[i][j]=a[j][i];
			}
		}
		printf("\nTranspose of matrix A:\n");
		for(i=0;i<col;i++)
		{
			for(j=0;j<row;j++)
			{
				printf("%d\t",t[i][j]);
			}
			printf("\n");
		}
		return 0;
}



