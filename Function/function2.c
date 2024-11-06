#include<stdio.h>

int sum(){
    int a,b; 
    scanf("%d %d",&a,&b);
    int s = a+b;
    return s;
}
int main()
{
    int s = sum();//function k call kore s er moddhe store korchi
    printf("%d",s);
    return 0;
}