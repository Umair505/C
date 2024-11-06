#include<stdio.h>
int main()
{
    int x=100;
    int *ptr = &x;
    // printf("X er address :%p\n",&x);
    // printf("ptr er value :%p\n",ptr);
    // printf("ptr er Address :%p\n",&ptr);
    // printf("ptr memory size :%d\n",sizeof(ptr));
    // x = 200; *ptr =200 likha same kotha 
    *ptr =200;
    
    printf("x er value:%d\n",x);
    //defference
    printf("x er value:%d\n",*ptr);
    return 0;
}