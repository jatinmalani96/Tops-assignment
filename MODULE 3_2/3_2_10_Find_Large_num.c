#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter number: ");
    scanf("%d %d %d",&a,&b,&c);
    if (a>=b&&a>=c)
    {
        printf("%d is Large num",a);
    }
    if (b>=c&&b>=a)
    {
        printf("%d is Large num",b);
    }
    if (c>=a&&c>=b)
    {
        printf("%d is large num",c);
    }
    
    
    
    return 0;
}