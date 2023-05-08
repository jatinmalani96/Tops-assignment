#include<stdio.h>
int main()
{
    int n;
    int a=0;
    int b=1;
    int c=a+b;
    printf("Enter number: ");
    scanf("%d",&n);
    printf("Fibonacci series is :%d %d",a,b);
    for (int i = 3; i <=n; ++i)
    {
        printf(" %d ",c);
        a=b;
        b=c;
        c=a+b;
    }
    return 0;
}