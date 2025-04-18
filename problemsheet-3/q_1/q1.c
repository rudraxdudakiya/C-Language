/*
 * q1.c
 *
 *  Created on: 21-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 20
int main()
{
	int a[size]={0};
	int i,j,n;

	//taking input of Array
	printf("enter number of element in array:\n");
	scanf("%d",&n);

	if(size<n)
	{
		printf("\n overflow");
		exit(1);
	}
	printf("enter %d element \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	//printing Array Elements
	printf("\nArray elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	//Array shorting
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])//for descending if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("\nArray after shorting:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}

	return 0;
}

