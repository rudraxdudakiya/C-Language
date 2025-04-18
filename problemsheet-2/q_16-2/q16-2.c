/*
 * q16-2.c
 *
 *  Created on: 23-Sep-2023
 *      Author: root
 */
/*
 * q16-1.c
 *
 *  Created on: 23-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int n,i,j,k,l;
	printf("enter number=");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		for(k=1;k<=n-i;k++)
		{
			printf("   ");
		}
		for(k=1;k<=n-i-1;k++)
		{
			printf("   ");
		}
		for(l=1;l<=i;l++)
		{
			if(l==5)
		    continue;
			printf(" * ");
		}
	 printf("\n");
	}
	return 0;
}



