#include <stdio.h>

void main()
{
    int a;
    int b;
    printf("enter the value of a and b");
    scanf("%d %d",&a,&b);
    printf("user input a::%d,b::%d\n",a,b);
    printf("division operation\n");
    //a=35;
    //b=7;
    int remainder;
    float quotient;
    remainder = a%b;quotient =a/b;
    printf("rem%d;quo%f\n",remainder,quotient);
    
}