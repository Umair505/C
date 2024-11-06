#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int arr[n]; for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);
    }
    int m; scanf("%d",&m);
    int brr[m]; for(int j=0;j<m;j++){
        scanf("%d",&brr[j]);
    }
    int ans[m+n];
    for(int i=0;i<n;i++){
        ans[i]=arr[i];
    }
    int i=n;
    for(int j=0;j<m;j++){
        ans[i]=brr[j];
        i++;
    }
    for(int i=0;i<n+m;i++){
        printf("%d ",ans[i]);
    }
    return 0;
}