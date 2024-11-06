#include<stdio.h>
int main(){
int x,even=0,odd=0,pos=0,neg=0;
scanf("%d",&x);
for(int i=1;i<=x;i++){
    scanf("%d",&i);
    if(i%2==0){
        even++;
    }
    else{
        odd++;
    }
    if(i>0){
        pos++;
    }
    else if(i<0){
        neg++;
    }
}printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
return 0;
}