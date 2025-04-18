#include<stdio.h>
int main()
{
    char s[20];
    printf("enter the string=");
    scanf("%s",s);
    printf("%s\n",s);
    int i=0,length=0;
    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    printf("length=%d\n",length);
    int pos;
    printf("enter the position=");
    scanf("%d",&pos);
    for(i=length;i>pos-1;i--)
    {
        s[i]=s[i-1];
    }
    s[length+1]='\0';
    printf("shifted string=%s\n",s);
    char n[2];
    printf("enter new char=");
    scanf("%s",n);
    s[pos]=n[0];
    printf("%s",s);
    return 0;
}