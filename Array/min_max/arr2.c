/*
 * arr2.c
 *
 *  Created on: 07-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 10
int main()
{
	int a[size],i;
	for(i=0;i<size;i++)
	{
		printf("enter value for %d=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		printf("\n Address of a[%d]=%u \tvalue of a[%d]=%d",i,&a[i],i,a[i]);
	}
	int min=a[0];
    int	max=a[0];
    for(i=0;i<size;i++)
    {
    	if(min>a[i])
    		min=a[i];
    }
    for(i=0;i<size;i++)
    {
       	if(max<a[i])
     		max=a[i];
     }
    printf("\n smallest element = %d",min);
    printf("\n largest element = %d",max);
	return 0;
}

