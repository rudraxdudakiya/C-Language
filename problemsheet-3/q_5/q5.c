/*
 * q5.c
 *
 *  Created on: 09-Nov-2023
 *      Author: root
 */

#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];

	//taking input of strings
	printf("enter string 1=");
	scanf("%s",str1);
	printf("enter string 2=");
	scanf("%s",str2);

	//printing both strings
	printf("First String=%s\nSecond String=%s\n",str1,str2);

	//getting length
	int i=0,length=0;
	while(str1[i]!='\0')
	{
		length++;
		i++;
	}

	i=0;
	int j=length;
	while(str2[i]!='\0')
	{
		str1[j]=str2[i];//merging
		i++;
		j++;
	}
	str1[j]='\0';

	//printing result
	printf("\nAfter merging string 1 & 2:\n%s",str1);

	return 0;
}

