#include<stdio.h>
void fun(int *p){//eikhane amra x er address ta pathaichi
    printf("p er address : %p\n",p);
    // printf("main er x er value:%d\n",*p);//ami eikhane x er value declare korini tarporo eita main er x print korce
    *p = 500;
}
int main()
{
    int  x =10;
    printf("x er address :%p\n",&x);
      fun(&x);//fun ke call kore amra pointer a x er address pass korsi
    printf("x er value: %d",x);
    return 0;
}