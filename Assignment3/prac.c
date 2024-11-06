#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int len = strlen(s);
    char s1[len];
    int j;
    for(int i=0,j=len-1;i<len;i++,j--){
        s[i]=s[j];
    }
    s1[j]='\0';
    printf("%s",s1);
    return 0;
}