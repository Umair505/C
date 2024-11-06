#include<stdio.h>
#include<string.h>
int is_palindrome(char s[]){
   int len = strlen(s);//length ber kosi
   char s2[len];//arekta string nisi reverse korar jonno
   int i=0;
   int j=len-1;//shesh theke shuru hobe  
   while (i<len)//length er ag porjontho cholbe
   {
    s2[j] =s[i];//s string er value gulo reverse kore arekta te rakhtechi
    i++;// i er ek kore barbe
    j--;//j er man ek kore kombe
   }
   s2[len] ='\0';
   
   int ans = strcmp(s,s2);//eikhane amra check korsi s ar s2 same kina same hole return 1 na hole 0
   if(ans==0){
    return 1;
   }
   else{
    return 0;
   }
}
int main()
{
    char s[1001];
    scanf("%s",s);
    int ans = is_palindrome(s);
    if(ans==1){
    printf("Palindrome");
    }
     else{
        printf("Not Palindrome");
    }
    return 0;
}