/*
 * q12.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20];
	char str2[20];
	printf("enter the string=");
	scanf("%s",str1);
	int i=0,length=0,j,diff=0;

	while(str1[i]!='\0')
	{
		length++;
		i++;
	}
	for(i=0,j=length-1;i<length;i++,j--)
	{
		str2[i]=str1[j];
	}
	printf("%s\n",str2);

	diff=strcmp(str1,str2);
	if(diff==0)
	{
		printf("%s is a palindrome",str1);
	}
	else
	{
		printf("%s is not a palindrome",str1);
	}

	return 0;
}

