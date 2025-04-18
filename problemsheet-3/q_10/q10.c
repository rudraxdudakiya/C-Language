/*
 * q10.c
 *
 *  Created on: 09-Nov-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char s1[20];
	char s2[20];
	int n,i=0;
	printf("enter string 1");
	scanf("%s",s1);
	printf("enter N number of characters=");
	scanf("%d",&n);
	while(i!=n)
	{
		s2[i]=s1[i];
		i++;
	}
	printf("string 2=%s",s2);
	return 0;
}





