/*
 * enum2.c
 *
 *  Created on: 05-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	enum week{mon=1,tue,wed,thu,fri,sat,sun};
	printf("%d%d%d%d%d%d%d",mon,tue,wed,thu,fri,sat,sun);

	enum week day;
	printf("\nenter day number=");
	scanf("%d",&day);

	switch (day)
	{
	case mon:
			printf("maths");
			break;
	case tue:
			printf("programming");
			break;
	case wed:
			printf("electronics");
			break;
	case thu:
			printf("soft skill");
			break;
	case fri:
			printf("networking");
			break;
	case sat:
			printf("IOT");
			break;
	case sun:
			printf("stat");
	}
	return 0;
}

