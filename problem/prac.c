// #include<stdio.h>
// int fun(int arr[],int n){
//      arr[n-1] = 100;
//     for(int i=0;i<n;i++){
//      printf("%d ",arr[i]);
//     }

// }
// int main()
// {
//     int n; scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     fun(arr,n);
//     return 0;
// }
#include<stdio.h>
int swap(int x,int y){
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d",x,y);
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}