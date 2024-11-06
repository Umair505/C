#include<stdio.h>
long long fact(long long int a){
    if(a==1 || a==0) return 1;
  long long int res=a* fact(a-1);
  return res;
}
int main()
{
    long long int x; scanf("%lld",&x);
    long long int ans= fact(x);
    printf("%lld",ans);

    return 0;
}