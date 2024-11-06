#include<stdio.h>
#include<string.h>
int main()
{
    int n; scanf("%d",&n);
    for(int i=0;i<n;i++){
        char s[10001];
        scanf("%s",s);
        int countC=0,countS=0,countD=0;
        for(int i=0;i<strlen(s);i++){
            if(s[i]>='A' && s[i]<='Z'){
                countC++;
            }
            if(s[i]>='a' && s[i]<='z'){
                countS++;
            }
            if(s[i]>='0' && s[i]<='9'){
                countD++;
            }
        }
        printf("%d %d %d\n",countC,countS,countD);

    }
    return 0;
}

// Problem Statement

// You will be given a string S. The string will contain small and capital English alphabets and digits only. You need to tell how many of them are capital alphabets, how many are small alphabets and how many are digits.

// Input Format

// First line will contain T, the number of test cases.
// Each test case will contain only S.
// Constraints

// 1 <= T <= 1000
// 1 <= |S| <= 10000; Here |S| means the length of S.
// Output Format

// Output the count of capital alphabets first, then the count of small alphabets then the count of digits. Don't forget to put a new line after each test case.
// Sample Input 0

// 2
// theFox25IsBrave
// ILoveYou100TimesAndSay2Also
// Sample Output 0

// 3 10 2
// 7 16 4
// Submissions: 495
// Max Score: 15
// Difficulty: Easy
// Rate This Challenge:

    
// More
 
