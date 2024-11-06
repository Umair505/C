#include<stdio.h>
int fun(int a,int b){
    int c=a+b;
    return c;
}
int main()
{
    int x,y; scanf("%d %d",&x,&y);
    printf("%d",fun(x,y));
    return 0;
}