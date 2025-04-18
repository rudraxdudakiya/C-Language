/*
 * q13.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */

#include<stdio.h>
int main()
{
	int n,sum=0,i;
	printf("enter number=");
	scanf("%d",&n);
	printf("\nodd numbers from 0 to %d are as follows:",n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf(" %d ",i);
			sum=sum+i;
		}
	}
	printf("\n sum =%d",sum);
	return 0;
}
