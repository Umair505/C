#include<stdio.h>
void sum(void){
    int a,b;
    scanf("%d %d",&a,&b);
    int s = a+b;
    printf("%d\n",s);
}
int main()
{
    sum();//joto bar call korbo totobar amake sum ene dibe.Ami eikhane 2bar call korsi tai duibar total 4 ta input nia amake duita sum dibe 
    sum();
    return 0;
}