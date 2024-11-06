#include<stdio.h>
int sum(int x, int y){
    int sum = x + y;
    return sum;
}
int main()
{
  // int s = sum(10,12);//calling function & store the value
   //printf("%d",s);
   printf("%d\n",sum(12,30));
   printf("%d",sum(100,200));
    return 0;
}