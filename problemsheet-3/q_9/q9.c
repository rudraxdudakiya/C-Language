/*
 * q9.c
 *
 *  Created on: 09-Nov-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char s1[20];
	char s2[20];
	int i=0;
	printf("enter string 1");
	scanf("%s",s1);

	while(s1[i]!='\0')
	{
		s2[i]=s1[i];
		i++;
	}
	printf("string 2=%s",s2);
	return 0;
}



