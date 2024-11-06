#include<stdio.h>
#include<string.h>
int main()
{
    char a[11],b[11];
    scanf("%s %s",a,b);
    printf("%d %d\n%s%s\n",strlen(a),strlen(b),a,b);
    for(int i=0,j=strlen(b);i<strlen(a),j>=0;i++,j--){
      a[0]=b[strlen(b)-2];
      break;
    
    }
      b[0]=a[0];
    
    printf("%s ",a);
   printf("%s",b);
    return 0;
}


// Given two strings A and B. Print three lines contain the following:

// The size of the string A and size of the string B separated by a space
// The string produced by concatenating A and B (A + B).
// The two strings separated by a single space respectively, after swapping their first character.
// For more clarification see the example below.

// Input
// The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

// The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

// Output
// Print the answer required above.

// Example
// inputCopy
// abcd
// ef
// outputCopy
// 4 2
// abcdef
// ebcd af