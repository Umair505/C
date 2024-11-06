#include <stdio.h>
#include<string.h>
int main() {
    char F1[100], S1[100];
    char F2[100], S2[100];
    
    // Read input
    scanf("%s %s", F1, S1);
    scanf("%s %s", F2, S2);
    
    // Compare the second names directly
   int flag =0;
   for(int i=0;i<strlen(S1) && i<strlen(S2);i++){
    if(S1[i]==S2[i]){
        flag = 1;
    }
    else{flag=0;}
   }
   if(flag==1){
    printf("ARE Brothers");
   }
   else{
    printf("NOT\n");
   }
    
    return 0;
}
