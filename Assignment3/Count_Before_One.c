#include<stdio.h>
int count_before_one(int arr[],int n){
    int count =0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
         break;
        }
        else{
            count++;
        }
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
 int ans = count_before_one(arr,n);
  printf("%d",ans);
    return 0;
}