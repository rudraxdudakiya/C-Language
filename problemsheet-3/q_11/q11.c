/*
 * q11.c
 *
 *  Created on: 09-Nov-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char str[20];
	printf("enter the string=");
	scanf("%s",str);
	int i=0,length=0,j;
	char temp;
	while(str[i]!='\0')
	{
		length++;
		i++;
	}
	for(i=0,j=length-1;i<j;i++,j--)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("%s",str);
	return 0;
}

