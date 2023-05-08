#include<stdio.h>
int main()
{
    int numday;
    int year;
    int month;
    int day;
    printf("Enter number of Days: ");
    scanf("%d",&numday);
    year=numday/365;
    month=(numday-year*365)/30;
    day=(numday-year*365-month*30);
    printf("Year=%d\n",year);
    printf("Month=%d\n",month);
    printf("Day=%d\n",day);
    return 0;
}