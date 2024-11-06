#include<stdio.h>
int main()
{
    int a=100,b=200,temp;
    temp = a;
    a = b;
    b = temp;
    printf("a=%d b=%d",a,b);
    return 0;
}