#include<stdio.h>
int main(){
int x,firstD;
scanf("%d",&x);
firstD=x/1000;
if(firstD % 2==0){
    printf("EVEN");
}
else{
    printf("ODD\n");
}
    return 0;
}