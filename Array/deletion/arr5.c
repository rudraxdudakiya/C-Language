/*
 * arr5.c
 *
 *  Created on: 07-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 20
int main()
{
	int a[size]={0};
	int pos,i,n;
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

	printf("\nenter position to delete array element");
	scanf("%d",&pos);

	if(pos>n)
	{
		printf("Deletation not posible,\n");
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		a[i]=0;
		printf("New array after deletation:\n");
		for(i=0;i<n;i++)
		{
			printf(" %d ",a[i]);
		}
	}
	return 0;
}

