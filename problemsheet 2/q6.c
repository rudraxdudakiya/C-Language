#include<stdio.h>
int main()
{
    int i,n,count=0;
    printf("enter the number=");
    scanf("%d",&n);
    while(n!=0)
    {
        count++;
        n=n/10;
    }
    printf("count=%d",count);
    return 0;
}