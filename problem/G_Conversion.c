#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100001];
    scanf("%s",ch);
    for(int i=0;i<strlen(ch);i++){
       if(ch[i]>='a' && ch[i]<='z'){
        ch[i]=ch[i]-32;
       }
       else if(ch[i]>='A' && ch[i]<='Z')
       {
       ch[i]= ch[i]+32;
       }
       if(ch[i]==',')
       {
        ch[i]=' ';
       }
    }
    printf("%s\n",ch);
    
    return 0;
}

// Given a string S. Print the origin string after replacing the following:

// Replace every comma character ',' with a space character.
// Replace every capital character in S with its respective small character and Vice Versa.
// Input
// Only one line contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string and it consists of lower and upper English letters and comma character ','.

// Output
// Print the string after the conversion.

// Example
// inputCopy
// happy,NewYear,enjoy
// outputCopy
// HAPPY nEWyEAR ENJOY