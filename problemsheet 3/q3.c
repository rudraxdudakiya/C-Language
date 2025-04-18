#include<stdio.h>
#define size 10
int main()
{
    int a[size]={0};
    int i,sum=0;

    printf("enter array a:");
    for(i=0;i<size;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    printf("sum of array is %d",sum);
    return 0;
}