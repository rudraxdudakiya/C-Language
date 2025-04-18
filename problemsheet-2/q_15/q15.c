/*
 * q15.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */
# include<stdio.h>
int main ()
{
	int n,i,a=0,b=1,c;
	printf("enter number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf(" %d ",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}

