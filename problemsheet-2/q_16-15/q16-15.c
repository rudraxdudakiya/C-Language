/*
 * q16-15.c
 *
 *  Created on: 05-Oct-2023
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
		for(j=1;j<=n;j++)
		{
			if(j<i)
			{
				k=n+j-i;
				printf("%d",k);
			}
			else
			{
				printf("%d",n);
			}
		}
	printf("\n");
	}
	return 0;
}

