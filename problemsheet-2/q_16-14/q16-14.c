/*
 * q16-14.c
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
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i-1;j++)
		{
			printf(" ");
		}
		for(k=1;k<=n-i+1;k++)
		{
			printf("%d",k);
		}
		for(l=n-i;l>=1;l--)
		{
			printf("%d",l);
		}
	printf("\n");
	}
	return 0;
}

