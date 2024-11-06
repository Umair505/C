#include<stdio.h>
#include<string.h>
int main()
{   int n; scanf("%d",&n);
    while(n--){
     char s1[60],s2[60];
     scanf("%s %s",s1,s2);
     int a = strlen(s1),b = strlen(s2);//length ta store korchi konta boro konta choto ber korar jonno.suppose input-ipAsu ccsit  ey gpt eikhane bujha jacche first ta boro

     int max = a;//amra max er moddhe a dia dilam
     if(b>max){//ar jodi b boro hoi taile ei condition
        max = b;
     }
     for(int i=0;i<max;i++){//ekta loop chalaisi jeita max shei porjontho
        if(i<a){//index jotokkhon a theke chOto totokkhon print hobe
            printf("%c",s1[i]);
        }//ekishate ei loop o print hobe karon if disi onno kichu dile ekishate print hotona
        if(i<b){
            printf("%c",s2[i]);
        }
     }
     printf("\n");//protthek loop er por new line print hobe
    }
    return 0;
}

// Given two strings S and T. Print a new string that contains the following:

// The first letter of the string S followed by the first letter of the string T.
// the second letter of the string S followed by the second letter of the string T.
// and so on...
// In other words, the new string should be ( S0 + T0 + S1 + T1 + .... ).
// Note: If the length of S is greater than the length of T then you have to add the rest of S letters at the end of the new string and vice versa.

// Input
// The first line contains a number N (1 ≤ N ≤ 50) the number of test cases.

// Each of the N following lines contains two string S, T (1 ≤ |S|, |T| ≤ 50) consists of lower and upper English letters.

// Output
// For each test case, print the required string.

// Example
// inputCopy
// 2
// ipAsu ccsit
// ey gpt
// outputCopy
// icpcAssiut
// egypt




//solve with for loop
//#include<stdio.h>
// #include<string.h>
// int main()
// { 
//     int n; scanf("%d",&n);
//    for(int i=0;i<n;i++)
//    {
//     char s1[60],s2[60];
//     scanf("%s %s",s1,s2);
//     int max =strlen(s1);
//     if(max<strlen(s2)){
//         max = strlen(s2);
//     }
//     for(int i=0;i<max;i++){
//         if(i<strlen(s1)){
//             printf("%c",s1[i]);
//         }
//         if(i<strlen(s2)){
//             printf("%c",s2[i]);
//         }
//     }
//     printf("\n");

//    }
//     return 0;
// }