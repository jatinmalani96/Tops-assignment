#include<stdio.h>
int main()
{
    float base;
    float hight;
    float area;
    printf("Enter base and hight of triangal ");
    scanf("%f %f",&base,&hight);
    area = (1.0/2)*base*hight;
    printf("Area of triangal = %f",area);
    return 0;
}