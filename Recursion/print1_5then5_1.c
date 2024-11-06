#include<stdio.h>
void print(int n)
{
    if(n==6)return 0;
    printf("%d ",n);
    print(n+1);
    printf("%d ",n);
}
int main()
{
    print(1);
    return 0;
}