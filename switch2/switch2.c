/*
 * switch2.c
 *
 *  Created on: 04-Sep-2023
 *      Author: root
 */

/*
 * switch.c
 *
 *  Created on: 04-Sep-2023
 *      Author: root
 */
#include<stdio.h>
int main()
{
	char ch;
	int ch2=98;
    scanf("%c",&ch);
    printf("ascii=%d\n",ch);
    printf("character of %d = %c",ch2,ch2);

    switch(ch2)
    {
    case 'd':
      		printf("case d");
      		break;
    case 'D':
      		printf("case D");
      		break;
    case 'c':
      		printf("case c");
      		break;
    case 'z':
      		printf("case z");
      		break;
	default :
			printf("Default");
	}
    return 0;
}


