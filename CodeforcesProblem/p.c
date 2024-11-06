#include<stdio.h>
int main()
{
    long long int e,m,b,result=0;
    scanf("%lld %lld %lld",&e,&m,&b);
    if(e==0 && b==0){
        printf("0");
    }
    else
    {
        long long int mn=e;
        if(m<mn && m<b){
            mn=m;
        }
        if(b<mn && b<m)
        {
            mn=b;
        }
        result=result+mn;
        e=e-mn;m=m-mn;b=b-mn;
        if(e/2<=b){
            result=result+(e/2);
        }
        else{
          result=result+b;
        }
        printf("%lld",result);
    } 
    return 0;
}