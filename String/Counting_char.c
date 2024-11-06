#include<stdio.h>
#include<string.h>
int main()
{
    char s[100];
    scanf("%s",s);
    int cnt[26]={0};//array shob element 0 diye initialize korse
    for(int i=0;i<strlen(s);i++)//int value anar jonno char k int value te rupanthor korsi 0 1 2 te
    {
     int val = s[i]-'a'; //a=97///0,1,2,3,4 anar jonno
     cnt[val]++;
    }// jodi ami eivabe dkehte chai--input-amara output-a-3
// m-1
// a-2
// r-1
    for(int i=0;i<strlen(s);i++)
    {
      int val = s[i]-97;
      if(cnt[val]!=0){
        printf("%c-%d\n",val+'a',cnt[val]);
      }
      cnt[val]=0;
    }
    // for(int i=0;i<26;i++){
    //     //jei latter gula nai oigula dekhte chacchina tai condition apply korsi
    //     // if(cnt[i]!=0){
    //     // printf("%c-%d\n",i+'a',cnt[i]);
    //     // }
        
    // }
    return 0;
}