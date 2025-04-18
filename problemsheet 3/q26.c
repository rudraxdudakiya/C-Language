#include<stdio.h>
#define size 50
int main()
{
    char s[size];
    printf("Enter the String=");
    scanf("%[^\n]",s);
    //getting length of the string;
    int length=0,i=0;
    while(s[i]!='\0')
    {
        length++;
        i++;
    }
    printf("length=%d\n",length);
    //taking input of specific position in the given string;
    int pos;
    printf("Enter the location=");
    scanf("%d",&pos);
    //checking validity of pos;
    if(pos>length)
    {
        printf("overflow\n");
        return 0;
    }
    //shifting characters of the string;
    for(i=length; i>=pos; i--)
    {
        s[i]=s[i-1];        
    }
    s[length+1]='\0';
    
    char ch[size];
    printf("Enter character to be inserted in %d position=",pos);
    scanf("%s",ch);
    s[pos]=ch[0];
    printf("%s",s);
    return 0;
}