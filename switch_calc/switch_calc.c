/*
 * switch_calc.c
 *
 *  Created on: 04-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char op;
	int a,b;
	printf("enter your choice of opartion\n(+,-,*,/)\n");
	scanf("%c",&op);
	printf("enter values=");
	scanf("%d%d",&a,&b);
	printf("\n");

	switch(op)
	{
	case '+':
			printf("sum=%d",a+b);
			break;
	case '-':
			printf("diffrence=%d",a-b);
			break;
	case '*':
			printf("multiplication=%d",a*b);
			break;
	case '/':
			if(b!=0)
			{
				printf("division=%d",a/b);
			}
			else
			{
				printf("div by Zero not possible");
			}
			break;
	default :
			printf("invalide oparetion");
	}
	return 0;
}

