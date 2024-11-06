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
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    // for(int i=0;i<n;i++){
    //     printf("%d ",a[i]);
    // }
    long long int sum =0;
    for(int i=0;i<x;i++){
         sum += a[i];
    }
    printf("%lld",sum);
    return 0;
}