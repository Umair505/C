#include<stdio.h>
#include<string.h>
int main()
{
    char s[1001];//string declare korsi
    scanf("%s",s);
    int isPalindrome =1;//ekta variable nisi palindrome kina check korar jonno
    for(int i=0;i<strlen(s)/2;i++)//ekta loop chalaisi length er ordekh porjontho
    {
       if(s[i]!=s[strlen(s)-1-i]){//condition a check kortechi s[i] ki length er shesher tar shoman kina
       //suppose "abba" index 0 te 'a' ache then check korbo last word tar shate mil ache kina .Last word 
       //ta check korsi length theke 1minus disi karon last a null (\0) thake tarpor i minus korchi protthek bar
        isPalindrome = 0;
        break;
       }
    }
    if(isPalindrome){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}


// Given a string S. Determine whether S is Palindrome or not

// Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

// Output
// Print "YES" if the string is palindrome, otherwise print "NO".

// Examples
// inputCopy
// abba
// outputCopy
// YES
// inputCopy
// icpcassiut
// outputCopy
// NO
// inputCopy
// mam
// outputCopy
// YES