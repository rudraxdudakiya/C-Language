#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number=");
    scanf("%d",&n);
    int sum=0;
    printf("odd numbers upto N:\n");
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\t",i);
            sum=sum+i;
        }
    }
    printf("\nsum=%d",sum);
    return 0;
}