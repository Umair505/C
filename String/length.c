#include<stdio.h>
#include<string.h>
int main()
{
    // char a[100];
    // int count =0;
    // scanf("%s",&a);
    // for(int i=0;a[i]!='\0';i++){
    //     count++;
    // }
    // printf("%s",a);
    char a[100];
    scanf("%s",a);
    int store = strlen(a);
    printf("%d",store);
    return 0;
}