#include<stdio.h>
#include<string.h>
int main()
{ 
    int n; scanf("%d",&n);
   for(int i=0;i<n;i++)
   {
    char s1[60],s2[60];
    scanf("%s %s",s1,s2);
    int max =strlen(s1);
    if(i<max){
        max = s1[i];
    }

   }
    return 0;
}