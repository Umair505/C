#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if(b>=a && a<=c){
    printf("%d ",a);
}
else if(a>=b && b<=c){
    printf("%d ",b);
}
else{
    printf("%d ",c);
    }
if(a>=b && c<=a) {printf("%d",a);}
else if(b>=a && c<=b) {printf("%d",b);}
else{printf("%d\n",c);}
return 0;
}