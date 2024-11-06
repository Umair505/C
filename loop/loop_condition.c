#include<stdio.h>
int main(){
for(int i=1;i<=5;i+=1){
    if(i%2==0){
printf("%d-even\n",i);
    }
    else{
        printf("%d-odd\n",i);
    }
}
    return 0;
}