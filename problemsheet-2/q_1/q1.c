/*
 * q1.c
 *
 *  Created on: 23-Sep-2023
 *      Author: root
 */

#include<stdio.h>
int main()
{
	int n,i,flag=0;
	printf("enter number=");
	scanf("%d",&n);

	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%d is a prime number",n);
	}
	else
	{
		printf("%d is not a prime number",n);
	}

	return 0;
}
