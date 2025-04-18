#include<stdio.h>
int main()
{
    float km,meter,feet,inch,cm;
    printf("enter the distance between two cities=");
    scanf("%f",&km);
    meter=km*1000;
    feet=km*3280.84;
    inch=km*393700.08;
    cm=km*100000;
    printf("distance between two cities in,\nmeter=%.2f\nfeet=%.2f\ninch=%.2f\ncm=%.2f" ,meter,feet,inch,cm);
    return 0;
}