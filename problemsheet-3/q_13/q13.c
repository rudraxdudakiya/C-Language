/*
 * q13.c
 *
 *  Created on: 21-Oct-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char str1[20];
	printf("enter string=");
	scanf("%s",str1);
	int i=0,v=0,c=0,s=0;

	while(str1[i]!='\0')
	{
		if((str1[i]>='A'&&str1[i]<='Z') || (str1[i]>='a'&&str1[i]<='z'))
		{
			if((str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O'||str1[i]=='U') || (str1[i]=='a'||str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'))
			{
				v++;
			}
			else
			{
				c++;

			}
		}
		else
			s++;
	i++;
	}
	printf("vowel=%d \nconsonant=%d \nspecial character=%d",v,c,s);
	return 0;
}

