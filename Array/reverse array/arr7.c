/*
 * arr7.c
 *
 *  Created on: 09-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 20
int main()
{
	int a[size]={0},b[size]={0},pos,i,j,n,temp;
	printf("enter number of elements in array=");
	scanf("%d",&n);
	if(n>size)
	{
		printf("\n overflow");
		exit(1);
	}

	printf("\n array elements:");

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

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
	printf("\n reverse array element=");

	for(i=0;i<n;i++)
	{
		printf(" %d ",a[i]);
	}
	return 0;
}

