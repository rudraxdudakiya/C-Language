#include<stdio.h>
#define size 20
int main()
{
    int a[size]={0};
    int n,i,j;
    printf("enter number ofelement in  array=");
    scanf("%d",&n);
    printf("enter the elements of array a:\n");
    for(i=0;i<size;i++)
    {
        printf("a[%d]=" ,i);
        scanf("%d" ,&a[i]);
    }
    return 0;
}