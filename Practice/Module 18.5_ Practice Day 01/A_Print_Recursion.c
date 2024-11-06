#include<stdio.h>
void fun(int x){
    if(x==0) return;
    printf("I love Recursion\n");
    fun(x-1);
}
int main()
{ 
    int a; scanf("%d",&a);
    fun(a);
    return 0;
}