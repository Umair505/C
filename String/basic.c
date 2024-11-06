#include<stdio.h>
int main(){
   char a[5];
   for(char i=0;i<5;i++){
    scanf("%c",&a[i]);
   }
   for(char i=0;i<5;i++){
    printf("%c",a[i]);
   }
    return 0;
}
//input a char likhar shomoi space ba enter dewa jabena
//A-65,a=97 ascii value eigula