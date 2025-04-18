#include<stdio.h>

int main()
{
    char s[20],s2[10];

    printf("enter string=");
    scanf("%s",s);
    printf("%s\n",s);

    printf("enter string2=");
    scanf("%s",s2);
    printf("%s\n",s2);

    int n,length2=0,i=0;
    printf("enter n=");
    scanf("%d",&n);
    
    while(s2[i]!='\0')
    {
        length2++;
        i++;
    }
    if(n>length2)
    {
        printf("overflow\n");
        exit(1);
    }
    int length1=0;
    i=0; 
    while(s[i]!='\0')
    {
        length1++;
        i++;
    }
    i=length1;
    int j=0;
    while(j!=n)
    {
        s[i]=s2[j];
        j++;
        i++;
    }
    s[i]='\0';
    printf("%s",s);
    
    return 0;
}