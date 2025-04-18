#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number=");
    scanf("%d",&n);
    int n1=n;
    int count=0;
    while(n1!=0)
    {
        n1=n1/10;
        count++;
    }
    int n2=n;
    int r,pro=1,sum=0;
    while(n2!=0)
    {
        r=n2%10;
        for(i=1;i<=count;i++)
        {
            pro=pro*r;
        }
        sum=sum+pro;
        n2=n2/10;
        pro=1;
    }
    if(sum==n)
    {
        printf("%d is an armstrong number",n);
    }
    else
    {
        printf("%d isn't an armstrong number",n);
    }
    return 0;
}