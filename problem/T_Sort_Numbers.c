#include<stdio.h>
int main()
{  
   int a,b,c;
   scanf("%d %d %d",&a,&b,&c);
   int max,mid,min;
   if(a<b){
    if(a<c){
        min =a;
        if(b<c){
            mid =b;
            max =c;
        }
        else{
            mid =c; max =b;
        }
    }
   }
   else{
    if(b<c){
        if(b<a){
            min = b;
        }
        if(a>c){
            max =a;
            mid =c;
        }
        else{
            max =c;
            mid =a;
        }
    }
   }
   printf("%d\n%d\n%d\n",min,mid,max);
   printf("\n");
   printf("%d\n%d\n%d\n",a,b,c);
    return 0;
}