#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter number A B:");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swap A=%d B=%d",a,b);
    
    return 0;
}