#include<stdio.h>
void fun(int a[],int n,int i)
{
    if(i==n) return;//i er man jokhoni n hobe tokhn shesh hoye jabe
    printf("%d ",a[i]);
    fun(a,n,i+1);//fun ke call korsi
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(a,n,0);//i=0 pathaisi first a er por upore i er man ek kore barbe ar array print korbe
    return 0;
}
//input-
//5 
// 10 20 30 40 50