/*
 * q16-3.c
 *
 *  Created on: 25-Sep-2023
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
		if(i==1)
			continue;
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		for(k=1;k<=n-i;k++)
		{
			printf("   ");
		}
		for(k=1;k<=n-i-1;k++)
		{
			printf("   ");
		}
		for(l=1;l<=i;l++)
		{
			if(l==5)
				continue;
			printf(" * ");
		}
	 printf("\n");
	}
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf(" * ");
			}
			for(k=1;k<=n-i;k++)
			{
				printf("   ");
			}
			for(k=1;k<=n-i-1;k++)
			{
				printf("   ");
			}
			for(l=1;l<=i;l++)
			{
				if(l==5)
					continue;
				printf(" * ");
			}
		 printf("\n");
		}
	return 0;
}

