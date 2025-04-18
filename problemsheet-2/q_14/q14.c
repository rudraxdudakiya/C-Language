/*
 * q14.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */

#include<stdio.h>
int main()
{
	int sum=0,i,n;
	printf("enter number=");
	scanf("%d",&n);
	while(n>0)
	{
		i=n%10;
		if(i%2!=0)
		{
			sum=sum+i;
		}
		n=n/10;
	}
	printf("odd digits sum=%d",sum);

	return 0;
}
