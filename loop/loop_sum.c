#include<stdio.h>
int main(){
int i,x,sum=0;
printf("Enter any number for sum:");
scanf("%d",&x);
for(i=0;i<=x;i+=1){
    sum+=i;
    //printf("%d\t",sum);(try to run it without comment)
}printf("%d",sum);
    return 0;
}