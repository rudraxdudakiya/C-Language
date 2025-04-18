/*
 * arr4.c
 *
 *  Created on: 07-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 20
int main()
{
	int a[size]={0};
	int j,pos,i,n;

	printf("enter the number of elements to be entered in array");
	scanf("%d",&n);

	if(n>size)
	{
		printf("\n overflow");
		exit(1);
	}

	for(i=0;i<n;i++)
	{
		printf("enter element %d",i);
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}

	printf("\nenter position to insert array element");
	scanf("%d",&pos);

	if(pos>size)
	{
		printf("\n overflow");
		exit(1);
	}
	else
	{
		for(i=n;i>=pos;i--)
		{
			a[i]=a[i-1];
		}
	}

	printf("\n after shifting:");
	for(i=0;i<=n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}

	printf("enter element to be inserted");
	scanf("%d",&j);

	a[pos-1]=j;

	printf("after inserting:");
	for(i=0;i<=n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
	return 0;
}

