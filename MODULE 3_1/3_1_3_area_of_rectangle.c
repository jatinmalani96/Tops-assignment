#include<stdio.h>
int main()
{
    float length;
    float breadth;
    float area;
    printf("Enter length and breadth of a rectangle: ");
    scanf("%f %f",&length,&breadth);
    area=length*breadth;
    printf("Area of rectangle:%f",area);
    return 0;
}