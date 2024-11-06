#include<stdio.h>
int main()
{
    long long n,x;
    scanf("%lld %lld",&n,&x);
    long int a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
             long long int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    long long int sum =0;
    for(long long int i=0;i<x;i++){
        if(a[i]>0){ sum += a[i];
        }
    }
    printf("%lld",sum);
    return 0;
}