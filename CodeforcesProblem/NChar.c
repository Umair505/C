#include<stdio.h>
int main(){
char x;
scanf("%c",&x);
if(x>='a' && x<='z'){
    int  res=x-32;
    printf("%c",res);
}
else{
   int res=x+32;
    printf("%c\n",res);
}
    return 0;
}