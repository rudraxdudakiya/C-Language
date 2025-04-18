#include<stdio.h>
int main()
{
    char s[20];
    int n,i=0;
    printf("enter the string=");
    scanf("%s",s);
    printf("enter the n=");
    scanf("%d",&n);
    char b[n];
    while(i!=n)
    {
        b[i]=s[i];
        i++;
    }
    b[i]='\0';
    printf("%s",b);
    return 0;
}