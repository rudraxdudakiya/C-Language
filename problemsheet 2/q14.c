#include<stdio.h>
int main()
{
    int n,i,r,sum;
    printf("enter the number=");
    scanf("%d",&n);
    sum=0;
    while(n>0)
    {
        r=n%10;
        if(r%2!=0)
        {
            sum=sum+r;
        }
        n=n/10;
    }
    printf("sum=%d",sum);
    return 0;
}