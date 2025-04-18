#include<stdio.h>
int main()
{
    int n,divisor,i,j;
    printf("enter the number=");
    scanf("%d",&n);
    printf("enter the divisor number=");
    scanf("%d",&divisor);
    j=0;
    for(i=1;n>=divisor;i++)
    {
        n=n-divisor;
        j++;
    }
    printf("division=%d\n",j);
    printf("reminder=%d",n);
    return 0;
}