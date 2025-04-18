/*
 * q16-8.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int i,j,k,n;
	printf("enter number=");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=n;k>=n-i+1;k--)
		{
			printf("%d",k);
		}
		printf("\n");
	}

	return 0;
}

