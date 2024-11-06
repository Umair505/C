#include<stdio.h>
int main()
{
    double a=34.50;
    double *ptr = &a;
    *ptr = 10.12;
    printf("a er value:%.2lf\n",a);
    printf("a er value:%.2lf\n",*ptr);
    printf("ptr er size:%d\n",sizeof(ptr));
    return 0;
}