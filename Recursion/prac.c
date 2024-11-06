#include<stdio.h>
int swap_it(int x,int y){
    int temp;
    temp = x;
    x = y;
    y =temp;
    printf("%d %d",x,y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap_it(a,b);
    return 0;
}