#include<stdio.h>
#include<string.h>
int main()
{
    char ch[100001];
    scanf("%s",ch);
    int str =strlen(ch);
    int count =0;
    for(int i=0;i<str;i++)
    {
        if(ch[i]!='a' && ch[i]!='e' && ch[i]!='i' && ch[i]!='e' && ch[i]!='o' && ch[i]!='u'){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}


// You will be given a string S as input contains only small English alphabets. You need to tell the number of consonants in it. The string will not contain any spaces.

// Note: Vowels are a,e,i,o and u. The rest are called consonants.

// Input Format

// Input will contain a string S.
// Constraints

// 1 <= |S| <= 100000 ; Here |S| means the length of string S.
// Output Format

// Output the number of consonants.
// Sample Input 0

// thefoxisgone
// Sample Output 0

// 7
// Sample Input 1

// sjxapw
// Sample Output 1

// 5