/*
 * q4.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter number=");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		if(n%i==0)
			printf(" %d ",i);
	}
	return 0;
}

