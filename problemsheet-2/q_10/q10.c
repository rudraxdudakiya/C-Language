/*
 * q10.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int i,n,j;
	printf("enter number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(j=2;j<=n;j++)
		{
			if(i%j==0)
				break;
		}
		if(i==j)
			printf(" %d ",j);
	}

	return 0;
}

