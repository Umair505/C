#include<stdio.h>
int main(){
char x;
scanf("%c",&x);
if(x>='a' && x<='z'){
    printf("ALPHA\nIS SMALL");
}
else if(x>='0' && x<='9'){
    printf("IS DIGIT");
}
else{
    printf("ALPHA\nIS CAPITAL");
    
}
return 0;
}