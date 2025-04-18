#include<stdio.h>
int main()
{
    char s[20],s2[20];
    printf("enter the string=");
    scanf("%s",s);
    printf("%s\n",s);

    printf("enter second string=");
    scanf("%s",s2);
    printf("%s\n",s2);

    int i=0,length2=0;
    while(s2[i]!='\0')
    {
        length2++;
        i++;
    }
    
    int n;
    printf("enter n=");
    scanf("%d",&n);

    if(n>length2)
    {
        printf("overflow\n");
        exit(1);
    }
    int length=0;
    i=0;
    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    int diff=0;
    i=0;
    while(i!=n)
    {
        diff=s[i]-s2[i];
        if(diff!=0)
        {
            printf("notequal diff=%d",diff);
            break;
        }
        else
        {
            if(i==n-1)
            {
                printf("equal");
            }
        }
        i++;
    }
    printf("%s",s);
    return 0;
}