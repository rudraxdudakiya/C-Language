/*
 * arr3.c
 *
 *  Created on: 07-Oct-2023
 *      Author: root
 */
#include<stdio.h>
#define size 5
int main()
{
	int r_no[size],c[size],foc[size],bks[size],total[size];
	float per[size],min,max;
	int i,s=0,l=0;

	for(i=0;i<size;i++)
	{
		printf("enter roll no.=");
		scanf("%d",&r_no[i]);

		printf("enter marks for c,foc,bks \n");
		scanf("%d%d%d",&c[i],&foc[i],&bks[i]);

		total[i] = c[i] + foc[i] + bks[i];
		per[i] = (float)total[i]/3;
	}
	printf("\n Roll No.\t c\t foc\t bks\t total\t percentage");
	for(i=0;i<size;i++)
	{
		printf("\n %d\t\t %d\t %d\t %d\t %d\t %f",r_no[i],c[i],foc[i],bks[i],total[i],per[i]);
	}
	min=per[0];
	max=per[0];
	for(i=0;i<size;i++)
	{
		if(min>per[i])
		{
			min=per[i];
			s=i;
		}
	}
	for(i=0;i<size;i++)
	{
		if(max<per[i])
		{
			max=per[i];
			l=i;
		}
	}
	printf("\n Height Percentage=%f",max);
	printf("\n %d\t\t %d\t %d\t %d\t %d\t %f",r_no[l],c[l],foc[l],bks[l],total[l],per[l]);
	printf("\n lowest Percentage=%f",min);
	printf("\n %d\t\t %d\t %d\t %d\t %d\t %f",r_no[s],c[s],foc[s],bks[s],total[s],per[s]);
	return 0;
}

