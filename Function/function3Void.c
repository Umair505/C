#include<stdio.h>
void sum(int x,int y){//void dile kono value return kore na tai amra main function a print na kore void sum function a print korse
    int s = x + y;
    printf("%d",s);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
    return 0;
}