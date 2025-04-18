/*
 * q16-11.c
 *
 *  Created on: 04-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=i;k<=n;k++)
		{
			printf("%d",k);
		}
	printf("\n");
	}

	return 0;
}

