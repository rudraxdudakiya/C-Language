#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter value for a,b,c=");
    scanf("%d%d%d",&a,&b,&c);

    (a==b?(a==c)?printf("a=b=c")
                 :(c>a)?printf("c is largest")
                       :printf("a=b & larger")
          :(b==c)?(b>a)?printf("b=c & larger")
                       :printf("a is largest")  
                 :(a==c)?(b>a)?printf("b is largest")
                              :printf("a=c & larger")
                        :(a>b)?(a>c)?printf("a is largest")
                                    :printf("c is largest")
                              :(b>c)?printf("b is largest")
                                    :printf("c is largest"));                                
    return 0;
}