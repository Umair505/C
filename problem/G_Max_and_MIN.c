#include<stdio.h>
#include<limits.h>
void maxmin(int arr[],int n){
    int max = INT_MIN;
    int min = INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
        if(arr[i]<min){
            min = arr[i];
        }
    }
    printf("%d %d",min,max);
}
int main()
{   int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    maxmin(arr,n);

    return 0;
}