/*
 * q25.c
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
	char temp;
	for(i=0;i<length;i++)
	{
		for(int j=i+1;j<length;j++)
		{
			if(s[i]>s[j])
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("sorted string=%s",s);
	return 0;
}
