#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number=");
    scanf("%d",&n);
    printf("factors of %d\n",n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("%d\t",i);
        }
    }

    return 0;
}