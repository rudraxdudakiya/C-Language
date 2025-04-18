/*
 * q1.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,total;
	float per;
	printf("ENTER MARKS FOR 101 102 103 104 105 =");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);

	total=m1+m2+m3+m4+m5;
	per=(float)total/5;
	printf("\n total=%d \n per=%.2f",total,per);

	if(per>=60)
	{
		printf("FIRST DIVISION");
	}
	else
	{
		if(per>=50)
		{
			printf("SECOND DIVISION");
		}
		else
		{
			if(per>=40)
			{
				printf("THIRD DIVISION");
			}
			else
			{
				printf("FAIL");
			}
		}
	}
	return 0;
}

