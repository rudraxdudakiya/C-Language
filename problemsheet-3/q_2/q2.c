/*
 * q2.c
 *
 *  Created on: 21-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 10
int main()
{
	int a[size],i,j,count=0;

	//taking input of Array elements
	printf("enter %d elements=\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}

	//printing Array elements
	printf("Array Elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}

	//checking prime number of Array
	printf("\nprime numbers:\n");
	for(i=0;i<size;i++)
	{
		int flag=0;
		for(j=2;j<a[i];j++)
		{
			if(a[i]%j==0)
			{
				flag=1;
				break;
			}
		}
		//printing prime numbers
		if(flag==0)
		{
			printf("%d\t",a[i]);
			count++;
		}
	}

	printf("\nTotal=%d",count);
	return 0;
}
