/*
 * q4.c
 *
 *  Created on: 18-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
        int a,b,c;
        printf("enter a,b,c =");
        scanf("%d%d%d",&a,&b,&c);
        if(a==b)
        {
        	if(a==c)
        	{
        		printf("a=b=c");
        	}
        	else
        	{
        		if(a>c)
        		{
        			printf("a=b & largest");
        		}
        		else
        		{
        			printf("c is largest");
        		}
        	}
        }
        else
        {
        	if(b==c)
        	{
        		if(a>b)
        		{
        			printf("a is largest");
        		}
        		else
        		{
        			printf("b=c & largest");
        		}
        	}
        	else
        	{
        		if(c==a)
        		{
        			if(b>c)
        			{
        				printf("b is largest");
        			}
        			else
        			{
        				printf("c=a & largest");
        			}
        		}
        		else
        		{
        			if(a>b)
        			{
        				if(a>c)
        				{
        					printf("a is largest");
        				}
        				else
        				{
        					printf("c is largest");
        				}
        			}
        			else
        			{
        				if(b>c)
        				{
        					printf("b is largest");
        				}
        				else
        				{
        					printf("c is largest");
        				}
        			}
        		}
        	}
        }
	return 0;
}


