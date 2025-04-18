#include<stdio.h>
int main()
{
int a,b,c;
printf ("ENTER a=");
scanf("%d",&a);
printf ("ENTER b=");
scanf("%d",&b);
printf ("ENTER c=");
scanf("%d",&c);
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
	printf("a=b &larger");
	}
	}
	else
	{
	printf("c is largest");
	}
}
	
	else if(b==c)
	{
		if(a>b)
		{
		printf("a is largest");
		}
		else
		{
		printf("b=c &larger");
		}
	}
	else if(c==a)
	{
		if(b>c)
		{
		printf("b is largest");
		} 	
		else
		{
		printf("c=a &larger");
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
	      	
    return 0;
}
