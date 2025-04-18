#include<stdio.h>
int main()
{
    char s[20],b[20];
    int length=0,i=0;
    printf("enter the string=");
    scanf("%s",s);
    printf("%s",s);

    i=0;
    while(b[i]!='\0')
    {
        b[i]=s[i];
        i++;
    }
    printf("%s",b);
    return 0;
}