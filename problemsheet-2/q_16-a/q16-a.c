/*
 * q16-3(2).c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter number=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		if(i==1)
			continue;
		for(j=1;j<=n-i;j++)
		{
			printf("   ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf(" * ");
		}
	printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf("   ");
		}
		for(k=1;k<=2*i-1;k++)
		{
			printf(" * ");
		}
	printf("\n");
	}
	return 0;
}

