/*
 * enum.c
 *
 *  Created on: 05-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	enum day{sunday=1,monday,tuseday,wednesday,thurseday,friday,saturday};
	printf("%d%d%d%d%d%d%d",sunday,monday,tuseday,wednesday,thurseday,friday,saturday);

	enum day d,today;
	printf("\nenter day number=");
	scanf("%d",&d);

	if(d==sunday)
		printf("you have to visit lab");
	today=sunday;
	printf("\nday %d",today+1);

	return 0;
}

