/*
 * q16-7.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{

	int i,j,r=0,n;
	printf("enter number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			r=j%2;
			if(r==0)
			{
				printf("0");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
return 0;
}


