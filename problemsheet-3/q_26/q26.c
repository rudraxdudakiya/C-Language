/*
 * q26.c
 *
 *  Created on: 30-Nov-2023
 *      Author: root
 */


#include<stdio.h>
int main()
{
	char s[50];

	//taking input of string
	printf("Enter the string=");
	scanf("%s",s);

	//getting length of string
	int length=0,i=0;
	while(s[i]!='\0')
	{
		length++;
		i++;
	}
	printf("length=%d",length);

	//taking input of location for insert new character
	int pos;
	printf("\nenter the location=");
	scanf("%d",&pos);

	//checking validity of location
	if(pos>length)
	{
		printf("error");
		exit(1);
	}

	//shifting characters
	for(i=length;i>=pos;i--)
	{
		s[i]=s[i-1];
	}
	s[length+1]='\0';
	printf("string after shifting=%s",s);

	//taking input of new character
	char ch[2];
	printf("\nEnter the character to be inserted=");
	scanf("%s",ch);
	s[pos]=ch[0];

	//printing final result
	printf("\nResult=%s",s);
	return 0;
}
