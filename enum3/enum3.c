/*
 * enum3.c
 *
 *  Created on: 05-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	enum year{jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dec};
	enum color{red=10,yellow=20,white=0,black=1};

	int i;
	for(i=jan;i<=dec;i++)
		printf("%d ",i);
	for(i=red;i<=black;i++)
		printf("%d ",i);
	return 0;
}


