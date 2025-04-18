#include<stdio.h>
#define size 20
int main()
{
    int a[size],i,pos,n;
    printf("enter the number of elements in array=");
    scanf("%d",&n);
    if(n>size)
    {
        printf("overflow\n");
        exit(1);
    }
    printf("enter %d elements:\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nenter the location=");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("deletion not posible\n");
    }
    for(i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    for(i=0;i<n-1;i++)
    {
        printf("%d\t",a[i]);
    }
    return 0;
}