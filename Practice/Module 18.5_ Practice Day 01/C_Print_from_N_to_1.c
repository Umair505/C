#include<stdio.h>
void fun(int x){
    if(x==0) return;
    printf("%d ",x);
    fun(x-1);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}