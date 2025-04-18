#include<stdio.h>
int main()
{
    int n,i,j;
    printf("enter the number=");
    scanf("%d",&n);
    printf("Armsrrong numbers up to %d\n",n);
    for(i=1;i<=n;i++)
    {
        int n1=i;
        int count=0;
        while(n1!=0)
        {
            n1=n1/10;
            count++;
        }
        int n2=i;
        int r,pro=1,sum=0;
        while(n2!=0)
        {
            r=n2%10;
            for(j=1;j<=count;j++)
            {
                pro=pro*r;
            }
            sum=sum+pro;
            pro=1;
            n2=n2/10;
        }
        if(sum==i)
        {
            printf("%d\n",i);
        }
    }
}