/*
 * q8.c
 *
 *  Created on: 10-Nov-2023
 *      Author: root
 */


#include<stdio.h>
int main()
{
	char s1[20];
	char s2[20];
	int n,i=0,diff=0,length2=0;

	//taking input of strings
	printf("enter string1=");
	scanf("%s",s1);
	printf("enter string2=");
	scanf("%s",s2);

	//printing both strings
	printf("First String=%s\nSecond String=%s\n",s1,s2);

	//taking input of N most characters which is going to merge
	printf("enter N number of character=");
	scanf("%d",&n);

	//getting length of strings
	while(s2[i]!='\0')
	{
		length2++;
		i++;
	}

	//comparing N most characters
	if(n>length2)
	{
		printf("overflow\n");
		exit(1);
	}
	else
	{
	i=0;
		while(i!=n)
		{
			diff=s1[i]-s2[i];
			if(diff!=0)
			{
				printf("\nnot equal difference=%d",diff);
				break;
			}
			else
			{
				if(i==n-1)
				{
					printf("\nequal");
				}
			}
	    i++;
		}
	}


	return 0;
}

