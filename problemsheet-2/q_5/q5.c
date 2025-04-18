/*
 * q5.c
 *
 *  Created on: 05-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int n,r;
	printf("enter number=");
	scanf("%d",&n);

		int count=0,a=n;
		while(a>0)
		{
			r=a%10;
			a=a/10;
			count++;
		}
		int sum=0,b=n;
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
		if(sum==n)
		{
			printf("%d is a armstrong number ",n);
		}
		else
		{
			printf("%d is not a armstrong number ",n);
		}

	return 0;
}


