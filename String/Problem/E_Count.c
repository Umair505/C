#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000001];
    int sum =0;
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++){//strlen(s) দিয়ে বুঝায়ছি তার লেন্থ পর্যন্ত চলবে লুপ মানে আমি যদি Moinul Islam দেই এইটা লাস্টের m পর্যন্ত চলবে
        // printf("%d\n",s[i]-'0');//351 int pete hole amader 48 ba 0 charcter minus kora lagbe
     sum = sum + (s[i]-'0');
    }
    printf("%d",sum);
    return 0;
}
// Given a string S. Print the summation of its digits.

// Input
// Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

// It's guaranteed that S contains only digits from 0 to 9.

// Output
// Print the answer required above.

// Example
// inputCopy
// 351
// outputCopy
// 9