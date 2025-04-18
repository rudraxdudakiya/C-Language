#include<stdio.h>
int main()
{
         int a,b,sum,diff,product,div;
          printf("Enter first number=");
          scanf("%d" ,&a);
          printf("Enter second number=");
          scanf("%d" ,&b);
          printf("\n a=%d b=%d" ,a,b);
          
          sum=a+b;
          diff=a-b;
          product=a*b;
          div=a/b;
          printf("\nsum=%d\ndiff=%d\nproduct=%d\ndivc=%d" ,sum,diff,product,div);
          return 0;
}
