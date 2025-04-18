/*
 * q16-12.c
 *
 *  Created on: 04-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter number=");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	}

	return 0;
}

