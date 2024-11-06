#include<stdio.h>
void fun(int x){//nicher x er value ta just eikhane copy hoiche 
    // printf("fun er x er address:%p\n",&x);
    x = 200;
}
int main()
{
    int x = 10;
    // printf("Main func x er address:%p\n",&x);//eikhane j x ache ar upore j x ache duita same na duita defferent variable eder addrs o aladha
     fun(x);
     printf("%d",x);//x er value kono change hobe na 10 e theke jabe jodio amra upore x = 200 diyechi
    return 0;
}