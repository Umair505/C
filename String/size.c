#include<stdio.h>
int main()
{
    int a[5];
    printf("%d\n",sizeof(a));//output will be 20 karon ekta int 4 byte kore nei
    printf("%d\n",sizeof(int));
    int arrsize= sizeof(a)/sizeof(int);
    printf("%d\n",arrsize);
    printf("%d",sizeof(long long int));
    return 0;
}