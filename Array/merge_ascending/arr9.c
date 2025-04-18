/*
 * arr9.c
 *
 *  Created on: 11-Oct-2023
 *      Author: root
 */
/*
 * arr8.c
 *
 *  Created on: 09-Oct-2023
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

	printf("enter element for array a:");
	for(i=0;i<asize;i++)
	{
		printf("\nenter element %d=",i);
		scanf("%d",&a[i]);
	}
	printf("\n enter elements for array b:");

	for(i=0;i<bsize;i++)
	{
		printf("\nenter elements for %d =",i);
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
	printf("\n Array A=");
	for(i=0;i<asize;i++)
	{
		printf(" %d ",a[i]);
	}
	printf("\nArray B=");
	for(i=0;i<asize;i++)
	{
		printf(" %d ",b[i]);
	}
	printf("\n Array c=");
	for(i=0;i<tsize;i++)
	{
		printf("%d ",c[i]);
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
	printf("ascending order:\n");
	for(i=0;i<tsize;i++)
	{
		printf("%d ",c[i]);
	}
	return 0;
}



