/*
 * q6.c
 *
 *  Created on: 09-Nov-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char str1[20];
	char str2[20];
	int n;

	//taking input of strings
	printf("enter string 1=");
	scanf("%s",str1);
	printf("enter string 2=");
	scanf("%s",str2);

	//printing both strings
	printf("First String=%s\nSecond String=%s\n",str1,str2);

	//taking input of N most characters which is going to merge
	printf("enter N number of characters=");
	scanf("%d",&n);

	//getting length of strings
	int i=0,length=0;
	while(str1[i]!='\0')
	{
		length++;
		i++;
	}
	i=0;
	int j=length;
	while(i!=n)
	{
		str1[j]=str2[i];//merging N most characters from 2nd string
		i++;
		j++;
	}
	str1[j]='\0';

	//printing result
	printf("\nAfter merging N most characters:\n%s",str1);

	return 0;
}

