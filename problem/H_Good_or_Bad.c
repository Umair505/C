#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    
    while(t--)
    {
        char ch[100003];
        scanf("%s",ch);
        int count=0;
        //101 ba 010 ke khuje ber koray kaj.Count er kaj jodi 101 010 thake taile count korbe
        for(int i=0;i<strlen(ch);i++){
            if(ch[i]=='1' && ch[i+1]=='0'&& ch[i+2]=='1'|| ch[i]=='0' && ch[i+1]=='1' && ch[i+2]=='0'){
                count++;
            }
        }
        if(count>0){
            printf("Good\n");
        }
        else{
            printf("Bad\n");
        }
    }
    return 0;
}

// Given a string S. Determine whether this string is Good or Bad.

// Note: The string is Good if and only if it has "010" or "101" as one of its sub-strings and it's not necessary to have both of them.

// A substring of a string is a contiguous subsequence of that string. So, string "forces" is substring of string "codeforces", but string "coder" is not.

// Input
// The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

// Each of the T following lines contains a string S (1 ≤ |S| ≤ 105) where |S| is the length of the string..

// It's guaranteed that S contains only '1s' and '0s'.

// Output
// For each test case, print "Good" if the string is Good otherwise, print "Bad".

// Example
// inputCopy
// 2
// 11111110
// 10101010101010
// outputCopy
// Bad
// Good
// Note
// Example case 1:

// The string doesn't contain 010 or 101 as sub-strings.

// Example case 2:

// The string contains both 010 and 101 as sub-strings.

//second method----
// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     int n; scanf("%d",&n);
//     for(int i=0;i<n;i++){
//         char ch[100001];
//         scanf("%s",ch);
//         int count =0;
//         for(int i=0;i<strlen(ch);i++){
//             if(ch[i]=='1' && ch[i+1]=='0' && ch[i+2]=='1' || ch[i]=='0' && ch[i+1]=='1' && ch[i+2]=='0'){
//                 count++;
//             }
//         }
//         if(count>0){
//             printf("Good\n");
//         }
//         else{
//             printf("Bad\n");
//         }
//     }
//     return 0;
// }