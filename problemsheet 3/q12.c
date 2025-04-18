#include<stdio.h>
#include<string.h>
int main()
{
    char s[20],r[20];
    printf("enter the string=");
    scanf("%s",s);
    printf("%s\n",s);

    int l=0,i=0;
    while(s[i]!='\0')
    {
        l++;
        i++;
    }
    printf("length=%d\n",l);

    int j;
    for(i=0,j=l-1;i<l;j--,i++)
    {
        r[i]=s[j];
    }
    r[i]='\0';
    printf("reversed string=%s\n",r);
    int diff=0;
    diff=strcmp(s,r);
    if(diff==0)
    printf("yahoo!!");
    else
    printf("oww!");
   i=0,diff=0;
    while(s[i]||r[i]!='\0')
    {
        diff=s[i]-r[i];
        if(diff!=0)
        {
            printf("not palindrome");
            break;
        }
        else
        {
            if(i==l-1)
            {
                printf("palindrome");
            }
        }
        i++;
    }
 
       return 0;
}