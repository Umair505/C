#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d",&T);
for(int i=0; i<T;i++){
  char s[101];
  scanf("%s",s);
  int len=strlen(s);
  if(len<=10){
   printf("%s\n",s);
  }
  else{
    printf("%c%d%c\n",s[0],len-2,s[len-1]);
  }

}

    return 0;
}
// Given a string S. Print the origin string if it's not too long otherwise, print the special abbreviation.

// Note: The string is called too long, if its length is strictly more than 10 characters. If the string is too long then you have to print the string in the following manner:

// Print the first character in the string.
// Print number of characters between the first and the last characters.
// Print the last character in the string.
// For example: "localization" will be "l10n", and "internationalization" will be "i18n".

// Input
// The first line contains a number T (1 ≤ T ≤ 100) number of test cases.

// Each of the T following lines contains a string S (1 ≤ |S| ≤ 100) where |S| is the length of the string.

// It's guaranteed that S contains only lowercase Latin letters.

// Output
// For each test case, print the result string.

// Example
// inputCopy
// 4
// word
// localization
// internationalization
// pneumonoultramicroscopicsilicovolcanoconiosis
// outputCopy
// word
// l10n
// i18n
// p43s