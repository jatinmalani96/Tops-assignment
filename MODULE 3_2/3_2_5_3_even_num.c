#include<stdio.h>
int main()
{
    int num;
    printf("Print All Even Number: ");
    scanf("%d",&num);
    for (int i = 0; i <= num; i++)
    {
        if (i%2==0)
        {
            printf("%d\n",i);
        }
        
    }
    
    return 0;
}