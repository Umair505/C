#include<stdio.h>
int main()
{
   long long int memo,momo,num;
    scanf("%lld %lld %lld",&memo,&momo,&num);
   if(memo%num==0 && momo%num==0){
        printf("Both");
    }
  else if(memo%num==0 && momo%num!=0){
    printf("Memo");
  }
  else if(memo%num!=0 && momo%num==0){
    printf("Momo");
  }
  else{
    printf("No One");
  }
    return 0;
}