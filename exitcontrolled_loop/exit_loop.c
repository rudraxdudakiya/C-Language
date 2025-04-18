/*
 * exit_loop.c
 *
 *  Created on: 04-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter value=");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("%d\n",i);
		i=i+1;
	}
	while(i<=n);
	return 0;
}

