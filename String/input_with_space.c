#include<stdio.h>
#include<string.h>
int main()
{
    char a[21];//Moinul Islam Umair print korte chaile eikhane space shoho 20 ta char ar null er jonno ek barai nisi
    gets(a);//age moinul er por space dile porer gulo print hoto na ei gets function dile baki gula print hobe
    printf("%s",a);
    return 0;

    // char a[21];
    // fgets(a,21,stdin);//first char variable then tar size tarpor stdin
    // //kintu prblm hocche 21 number char jawar por enter chple fgets ki kore enter k o nia fele .
    // //tai amra jei jaigai shesh hobe oikhane ekta null dia dibo index a;
    // a[21]='\0';
    // printf("%s",a);
}