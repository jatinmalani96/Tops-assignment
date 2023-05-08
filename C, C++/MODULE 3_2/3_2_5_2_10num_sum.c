#include<stdio.h>
int main()
{
    int num;
    int sum=0;
    printf("Enter 10 number: ");
    for (int i = 0; i <10; i++)
    {
        printf("number: ");
        scanf("%d",&num);
        sum=sum+num;
    }
    printf("Sum=%d",sum);
    return 0;
}