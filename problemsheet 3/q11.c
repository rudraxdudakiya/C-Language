#include<stdio.h>
int main()
{
    char s[20],b[20];
    printf("enter the string=");
    scanf("%s",s);

    printf("%s\n",s);
    
    int i=0,length=0,j,n;
    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    printf("length=%d",length);

    n=length;
    for(i=0,j=n-1;i<n;j--,i++)
    {
        b[i]=s[j];
    }
    b[i]='\0';
    printf("reversed string=%s",b);
    return 0;
}