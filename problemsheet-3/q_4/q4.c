/*
 * q4.c
 *
 *  Created on: 21-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 20
int main()
{
	int a[size]={0},i,j,n,temp;

	//taking input of Array
	printf("enter number of elements in array=\n");
	scanf("%d",&n);
	if(n>size)
	{
		printf("\n overflow");
		exit(1);
	}

	//printing Array elements
	printf("enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	//reversing the Array
	for(i=0,j=n-1;i<j;i++,j--)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	/*
	for(i=0,j=n-1;i<n;i++,j--)
	{
		b[i]=a[i];
	}
	 */

	//printing
	printf("\n reverse array element=");

	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}


