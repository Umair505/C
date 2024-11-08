#include<stdio.h>
#include<string.h>
int main()
{
    char a[21],b[21];
    scanf("%s %s",a,b);
    int v=strcmp(a,b);
    if(v>0){
        printf("%s",b);
    }
    else if(v<0){
        printf("%s",a);
    }
    else{
        printf("%s",a);
    }
    return 0;
}
// Given two strings X and Y . Print the smallest lexicographical one.

// Note: Lexicographical is the way of ordering the words based on the alphabetical order of their component letters.

// Input
// Only one line contains two strings X, Y(1 ≤ |X|, |Y| ≤ 20) consists of lowercase English letters.

// Output
// Print the smallest lexicographical string.

// Note: If both of X and Y are equal, print any of them.

// Example
// inputCopy
// acm
// acpc
// outputCopy
// acm