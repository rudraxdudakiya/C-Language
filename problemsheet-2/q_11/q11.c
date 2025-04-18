/*
 * q11.c
 *
 *  Created on: 30-Sep-2023
 *      Author: root
 */

#include<stdio.h>
int main(){
	int n,r;
	printf("enter number=");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		int count=0,a=i;
		while(a>0)
		{
			r=a%10;
			a=a/10;
			count++;
		}
		int sum=0,b=i;
		while(b>0)
		{
			int pro=1;
			r=b%10;
			for(int j=1;j<=count;j++)
			{
				pro=pro*r;
			}
			b=b/10;
			sum=sum+pro;

		}
		if(sum==i)
		{
			printf(" %d ",i);
		}
	}

	return 0;
}
