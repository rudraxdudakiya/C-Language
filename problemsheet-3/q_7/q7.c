/*
 * q7.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char s1[20];
	char s2[20];
	int i=0,length=0,length1=0,diff=0;

	//taking input of strings
	printf("enter string1=");
	scanf("%s",s1);
	printf("enter string2=");
	scanf("%s",s2);

	//printing strings
	printf("First string=%s\nSecond string=%s\n",s1,s2);

	//getting length of strings
	while(s1[i]!='\0')
	{
		length++;
		i++;
	}
	i=0;
	while(s2[i]!='\0')
	{
		length1++;
		i++;
	}

	//comparing both string
	i=0;

	if(length==length1)
	{
		while(s1[i]||s2[i]!='\0')
		{
			diff=s1[i]-s2[i];
			if(diff!=0)
			{
				printf("\nNot equal difference=%d",diff);
				break;
			}
			else
			{
				if(i==length-1)
				{
					printf("\nBoth strings are same\n");
				}
			}
		i++;
		}
	}
	else
	{
		printf("\nNot equal");
	}
	return 0;
}

