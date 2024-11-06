#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt[7]={0};
    for(int i=0;i<n;i++)
    {
        int val = a[i];
        cnt[val]++;
    }
    //print count
    for(int i=0;i<6;i++){
        printf("%d-%d\n",i,cnt[i]);
    }

   
    
    return 0;
}
// jeikha theke copy korbo sheikhane cursor rekhe alt+shift+down arrow key



 // // int zero=0,one =0;
    // // for(int i=0;i<n;i++){
    // //     if(a[i]==0){
    // //         zero++;
    // //     }
    // //     if(a[i]==1){
    // //         one++;
    // //     }
    
    // printf("0-%d\n",cnt[0]);
    // printf("1-%d\n",cnt[1]);
    // printf("2-%d\n",cnt[2]);
    // printf("3-%d\n",cnt[3]);
    // printf("4-%d",cnt[4]);
    