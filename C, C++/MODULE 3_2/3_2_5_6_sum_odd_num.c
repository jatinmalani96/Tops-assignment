#include <stdio.h>

int main()
{
    int num;
    int sum=0;
    printf("Enter number: ");
    scanf("%d",&num);
    for(int i=1; i<=num; i=i+2)
    {
        sum=sum+i;
    }
    printf("Sum of Odd number : %d",sum);
    return 0;
}