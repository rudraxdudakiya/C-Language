/*
 * q9.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int n,i,table;
	printf("enter number=");
	scanf("%d",&n);

	printf("multiplication table of %d is as follows :",n);
	for(i=1;i<=10;i++)
	{
		table=n*i;
		printf("\n %d x %d = %d",n,i,table);
	}
	return 0;
}

