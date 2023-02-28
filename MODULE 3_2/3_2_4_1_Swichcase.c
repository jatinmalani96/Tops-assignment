#include <stdio.h>
int main()
{
    int day;
    printf("Enter Day: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
    {
        printf("Sunday");
        break;
    }
    case 2:
    {
        printf("Monday");
        break;
    }
    case 3:
    {
        printf("Tuesday");
        break;
    }
    case 4:
    {
        printf("Wednesday");
        break;
    }
    case 5:
    {
        printf("thursday");
        break;
    }
    case 6:
    {
        printf("Friday");
        break;
    }
    case 7:
    {
        printf("Saturday");
        break;
    }
    default:
    {
        printf("Please enter value between 1 to 7 only \n");
        break;
    }
    }
    return 0;
}