#include<stdio.h>
int fun(char a[],int i)
{
    if(a[i]=='\0') return 0;//jokhoni length a gia null pabe oita 0 return korbe
    int l =fun(a,i+1);//rec j length dibe oita store korsi
    return l+1;//amra age thek 1 dhore rakhsi length recursion amdr bakigula ene dibe recursion er length ar amdr 1ta length mile total length tai 1 jog korsi
}
int main()
{
    char a[]="Moinul";
    int length = fun(a,0);//length store korsi function ke call kore
    printf("%d",length);
    return 0;
}