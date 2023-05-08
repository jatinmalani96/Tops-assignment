#include <stdio.h>
int fact = 1;
int num;
void showvalue(int a)
{
    fact = fact * a;
    if (a > 1)
    {
        showvalue(a - 1);
    }
}
int main()
{
    printf("Enter num: ");
    scanf("%d",&num);
    showvalue(num);
    printf("%d", fact);
    return 0;
}