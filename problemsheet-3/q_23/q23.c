/*
 * q23.c
 *
 *  Created on: 30-Nov-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char s[20];

	printf("Enter the string=");
	scanf("%s",s);
	int length=0;
	int i=0;
	while(s[i]!='\0')
	{
		length++;
		i++;
	}
	printf("length=%d\n",length);

	int pos;
	printf("the location=");
	scanf("%d",&pos);

	if(pos>length)
	{
		printf("error");
		exit(1);
	}
	for(i=pos;i<=length;i++)
	{
		s[i]=s[i+1];
	}
	printf("%s",s);
	return 0;
}
