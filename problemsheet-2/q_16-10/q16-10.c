/*
 * q16-10.c
 *
 *  Created on: 04-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int i=1,j,k,n;
	printf("enter number=");
	scanf("%d",&n);

	while(i<=n)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d",j);
		}
	printf("\n");
	i++;
		if(i<=n)
		{
			for(k=n;k>=1;k--)
			{
				printf("%d",k);
			}
			printf("\n");
		}
	i++;
	}

	return 0;
}



