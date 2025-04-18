/*
 * max1.c
 *
 *  Created on: 31-Aug-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
        int a,b,c;
        printf("enter a,b,c");
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
        			printf("a=b & max");
        		}
        		else
        		{
        			printf("c is max");
        		}
        	}
        }
        else
        {
        	if(b==c)
        	{
        		if(a>b)
        		{
        			printf("a is max");
        		}
        		else
        		{
        			printf("b=c & max");
        		}
        	}
        	else
        	{
        		if(c==a)
        		{
        			if(b>c)
        			{
        				printf("b is max");
        			}
        			else
        			{
        				printf("c=a & max");
        			}
        		}
        		else
        		{
        			if(a>b)
        			{
        				if(a>c)
        				{
        					printf("a is max");
        				}
        				else
        				{
        					printf("c is max");
        				}
        			}
        			else
        			{
        				if(b>c)
        				{
        					printf("b is max");
        				}
        				else
        				{
        					printf("c is max");
        				}
        			}
        		}
        	}
        }
	return 0;
}



