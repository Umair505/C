#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],t[1000];
    scanf("%s %s",s,t);
    int str= strlen(s);
    int str2= strlen(t);
    printf("%d %d\n",str,str2);//তাদের লেন্থ বের করলাম প্রথমে তারপর ei line ta k eivabe o likhte pari printf("%d %d\n",strlen(s),strlen(t));
    printf("%s %s",s,t);// স্ট্রিং টা প্রিন্ট করে দিলাম

    return 0;
}

// Given two strings S and T. Print 2 lines that contain the following in the same order:

// Print the length of S and T separated by space.
// Print a new string that contains S and T separated by a space.
// For more clarification see the example below.

// Input
// The first line contains a string S (1 ≤ |S| ≤ 103) where |S| is the length of S.

// The second line contains a string T (1 ≤ |T| ≤ 103) where |T| is the length of T.

// Output
// Print the answer required above.

// Examples
// inputCopy
// LEVEL
// ONE
// outputCopy
// 5 3
// LEVEL ONE
// inputCopy
// Programming
// contest
// outputCopy
// 11 7
// Programming contest