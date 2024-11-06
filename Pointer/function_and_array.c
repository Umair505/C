#include<stdio.h>
void fun(int ar[],int n){//ar[] eitar bodle amra *ar//array pathale oboshoi tar size o newa lagbe eikhan n holo size
    for(int i=0;i<n;i++){
        printf("%d ",ar[i]);
    }
}
int main()
{
    // int ar[5]={1,2,3,4,5};
    // fun(ar,5);
    int x;
    scanf("%d",&x);
    int arr[x];
    return 0;
}