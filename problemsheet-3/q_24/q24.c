/*
 * q24.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */

#include<stdio.h>
#define asize 5
#define bsize 5
int main()
{
	int a[asize],b[bsize];
	int i=0,j=0;
	int tsize=asize+bsize;
	int c[tsize];

	printf("enter element for array a:\n");
	for(i=0;i<asize;i++)
	{
		printf("enter element %d=",i);
		scanf("%d",&a[i]);
	}
	printf("\nenter elements for array b:\n");

	for(i=0;i<bsize;i++)
	{
		printf("enter elements for %d =",i);
		scanf("%d",&b[i]);
	}

	for(i=0;i<tsize;i++)
	{
		if(i<asize)
		{
			c[i]=a[i];
		}
		else
		{
			c[i]=b[j];
			j++;
		}
	}
	printf("\nArray A:\n");
	for(i=0;i<asize;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\nArray B:\n");
	for(i=0;i<asize;i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nArray c:\n");
	for(i=0;i<tsize;i++)
	{
		printf("%d\t",c[i]);
	}
	for(i=0;i<tsize;i++)
	{
		for(j=i+1;j<tsize;j++)
		{
			if(c[i]>c[j])//for discending c[i]<c[j]
			{
				int temp;
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("\nArray after sorting:\n");
	for(i=0;i<tsize;i++)
	{
		printf("%d\t",c[i]);
	}
	return 0;
}




