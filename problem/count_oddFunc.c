#include<stdio.h>
int count_odd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }
    }
    printf("%d",count);
    return count;
}
int main()
{ 
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    count_odd(arr,n);
    return 0;
}