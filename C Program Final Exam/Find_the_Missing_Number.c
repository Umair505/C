#include<stdio.h>
int main()
{
    long long int n; scanf("%lld",&n);
    for(int i=0;i<n;i++){
        long long int a,b,c,d;
        scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
        int multipication = b*c*d;
        if(a%multipication==0){
            printf("%lld",a/multipication);
        }
        else{
            printf("-1");
        }
    printf("\n");
   
    }
    
    return 0;
}