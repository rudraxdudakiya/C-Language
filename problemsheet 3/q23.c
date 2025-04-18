#include<stdio.h>
int main()
{
    char s[20];
    
    printf("enter the string=");
    scanf("%s",s);
    printf("%s\n",s);
    int pos,i=0,length=0;
    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    printf("length=%d\n",length);
    printf("enter the location=");
    scanf("%d",&pos);

    if(pos>length)
    {
        printf("overflow\n");
        exit(1);
    }
    for(i=pos-1;i<length;i++)
    {
        s[i]=s[i+1];
    }
    s[i]='\0';
    printf("result=%s",s);
    return 0;
}