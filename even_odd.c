#include<stdio.h>

int main ()
{
    int a ;// declarationD")
    printf("enter the value of a\n");
    scanf("%d", &a);
    printf("user input a::%d \n",a);
    int remainder;
    remainder = a%2;
    printf("rem%d",remainder);
    if(remainder) {
        printf("number is odd\n");
    } else {
        printf("number is even\n");
    }

}