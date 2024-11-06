#include<stdio.h>
int main(){
int x;
scanf("%d",&x);
for(int i=21;i<=x;i++){
    if(i%3==0 && i%7==0){
        printf("%d\n",i);
    }
}
    return 0;
}