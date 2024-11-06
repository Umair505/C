//Given a number N, and N numbers, find maximum number in these N numbers.
#include<stdio.h>
int main(){
int x;
int max=0;
int a;
scanf("%d",&x);
for(int i=1;i<=x;i++){
    scanf("%d",&a);
    if(max<a){
        max=a;
    }
}printf("%d",max);
    return 0;
}