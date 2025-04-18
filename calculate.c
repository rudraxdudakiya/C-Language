#include<stdio.h>
int main()
{
    int a,b ,addition,substract,multiplication,division_r;
    float division;
    
    printf("ENTER FIRST NUMBER=");
    scanf("%d",&a);
    
    printf("ENTER SECOND NUMBER=");
    scanf("%d",&b);
    
    printf("\na=%d b=%d" ,a,b);
    
    addition=a+b;
    substract=a-b;
    multiplication=a*b;
    
    printf("\naddition=%d\nsubstract=%d\nmultiplication=%d" ,addition,substract,multiplication);
    
    if(b!=0)
    {
    division=(float) a/b;
    division_r=a%b;
    
    printf("\ndivision=%fremainder=%d" ,division,division_r);
    }
    else
    {
    printf("\ndivision by zero ERROR");
    }
          return 0;
}
