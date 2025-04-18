#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,c;
    printf("enter the number=");
    scanf("%d",&n);
    for(i=1;a<=n;i++)
    {
        printf("%d\t",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}