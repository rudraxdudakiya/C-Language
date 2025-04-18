#include<stdio.h>
int main()
{
    char str[20];
    printf("enter the string=");
    scanf("%s",str);
    int i=0,length=0;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    int j;
    char temp;
    for(i=0;i<length-1;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("%s",str);
    return 0;
}