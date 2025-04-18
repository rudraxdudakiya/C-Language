/*
 * switch.c
 *
 *  Created on: 04-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	int day;
	printf("Enter day=");
	scanf("%d",&day);

	switch(day)
	{
	case 1:
		    printf("Monday");
	    	break;
	case 2:
			printf("Tuseday");
			break;
	case 3:
			printf("Wednesday");
			break;
	case 4:
			printf("Thurseday");
			break;
	case 5:
			printf("Friday");
			break;
	case 6:
			printf("Saturday");
			break;
	case 7:
			printf("Sunday");
			break;

	default :
			printf("Error");
	}
	return 0;
}

