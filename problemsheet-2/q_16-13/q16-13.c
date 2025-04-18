/*
 * q16-13.c
 *
 *  Created on: 04-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	printf("enter number=");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for(k=i;k>=1;k--)
		{
			printf("%d",k);
		}
		for(l=2;l<=i;l++)
		{
				printf("%d",l);
		}
	printf("\n");
	}

	return 0;
}

