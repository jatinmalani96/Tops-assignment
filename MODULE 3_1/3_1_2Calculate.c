#include<stdio.h>
int main()
{
    int a = 45;
    int b = 18;
    int c = 23;
    int d=5;
    int add = a + b + c;
    printf("%d + %d + %d = %d\n",a,b,c,add);
    int sub=a-b-d;
    printf("%d - %d - %d = %d\n",a,b,d,sub);
    int mul=a*b;
    printf("%d * %d = %d\n",a,b,mul);
    float div =(float) a/ (float) b;
    printf("%d / %d = %f\n",a,b,div);
    int mod = a%b;
    printf("%d %% %d = %d",a,b,mod);
    return 0;
}