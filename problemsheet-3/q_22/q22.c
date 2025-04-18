/*
 * q22.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
#define size 20
int main()
{
	int a[size],n,i,pos;
	printf("enter size of an array=");
	scanf("%d",&n);
	if(n>size)
	{
		printf("overflow\n");
		exit(1);
	}
	printf("enter %d elements\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position where you wish to delete an element=");
	scanf("%d",&pos);
	if(pos>n)
	{
		printf("deletion is not possible");
	}
	else
	{
		for(i=pos-1;i<n-1;i++)
		{
			a[i]=a[i+1];
		}
		a[i]=0;
		printf("Array after deletion:\n");
		for(i=0;i<n;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	return 0;
}
