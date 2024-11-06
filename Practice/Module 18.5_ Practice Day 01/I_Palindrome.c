#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];
    scanf("%s",s);
    int i=0;
    int j=strlen(s)-1;
    int flag =1;
    while(i<j){
        if(s[i]!=s[j]){
            flag =0;
        }
        j--;
        i++;
    }
    if(flag==1){
        printf("YES\n");
    }
    else{
        printf("NO");
    }
    return 0;
}

/*
#include<stdio.h>
#include<string.h>
int main()
{
    char a[1001],b[1001];
    scanf("%s",a);
    strcpy(b,a);
    int i=0;
    int j=strlen(b)-1;
    while(i<j){
        char temp = b[i];
        b[i] = b[j];
        b[j] = temp;
        j--;
        i++;
    }
    if(strcmp(a,b)==0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
*/