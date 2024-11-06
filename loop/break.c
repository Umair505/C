#include<stdio.h>
int main(){
for(int i=1;i<=10;i++){
    if(i==5){
        break;//continue;(try to run with continue output will be without 5 all will be print)
    }
    printf("%d\t",i);
}
    return 0;
}