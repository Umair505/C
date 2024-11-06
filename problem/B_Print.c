#include<stdio.h>
int fun(int a){
     for(int i=1;i<=a;i++){
        printf("%d",i);
    }
}
int main()
{
    int n;
    scanf("%d ",&n);
    fun(n);
    return 0;
}