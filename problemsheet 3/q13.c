#include<stdio.h>
int main()
{
    char s1[20];
    printf("enter the string=");
    scanf("%s",s1);
    printf("%s",s1);
 
 int c=0,v=0,s=0,i=0;
    while(s1[i]!='\0')
    {
        if( (s1[i]>='A'&&s1[i]<='Z') || ( s1[i]>='a'&&s1[i]<='z') )
        {
            if((s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u') || (s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U') )
                v++;
            else    
                c++;
        }
        else
            s++;
        i++;    
    }
    printf("vowels=%d\nconsonant=%d\nspecial charecters=%d",v,c,s);
    return 0;
}