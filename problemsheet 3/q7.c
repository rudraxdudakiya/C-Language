#include<stdio.h>
int main()
{
    char s[20],s2[20];
    printf("enter the string=");
    scanf("%s",s);
    printf("%s",s);
    printf("enter second string=");
    scanf("%s",s2);
    printf("%s",s2);
    
    int diff=0,i=0,length1=0,length2=0;

    while(s[i]!='\0')
    {
        i++;
        length1++;
    }
    i=0;
    while(s2[i]!='\0')
    {
        i++;
        length2++;
    }
    i=0;
    if(length1!=length2)
    {
        printf("strings are not equal\n");
        exit(1);
    }

        while(s[i]||s2[i]!='\0')
        {
            diff=s[i]-s2[i];
            if(diff!=0)
            {
                printf("strings are not equal\n diff=%d",diff);
                break;
            }
            else
            {
                if(i==length1-1)
                {
                    printf("strings are same");
                }
            }
            i++;
        }
    
            return 0;
}