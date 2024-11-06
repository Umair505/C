//তোমাকে একটি ক্যারেক্টার দেওয়া হবে। তোমাকে ঐ ক্যারেক্টার এর পরের ক্যারেক্টার প্রিন্ট করতে হবে।

#include<stdio.h>
int main(){
char ch;
scanf("%c",&ch);
if(ch=='z'){
    printf("a");
}
else{
    printf("%c",ch++);
}
    return 0;
}