#include<stdio.h>
#include<string.h>
int fun(char s[],int i){
    if(s[i]=='\0') return 0;
    int ans = fun(s,i+1);
    if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' ||s[i]=='U'){
        return ans+1;
    }
    else{
        return ans;
    }
}
int main()
{
    char s[201];
    fgets(s,201,stdin);
    int Vowel= fun(s,0);
    printf("%d",Vowel);
    
    return 0;
}


/*#include<stdio.h>
#include<string.h>
int main()
{
    char s[201];
    fgets(s,201,stdin);
    int count = 0;
    for(int i=0;i<strlen(s);i++){
        if(s[i]=='a' || s[i]=='e' ||s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' ||s[i]=='O' ||s[i]=='U')
        {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
*/