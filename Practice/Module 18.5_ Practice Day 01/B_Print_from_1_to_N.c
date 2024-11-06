#include<stdio.h>
void fun(int a,int b){
    if(a>b) return;
    printf("%d\n",a);
    fun(a+1,b);
    return;
}
int main()
{
    int n;
    scanf("%d",&n);
    fun(1,n);
    return 0;
}