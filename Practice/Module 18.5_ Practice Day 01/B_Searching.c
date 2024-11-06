#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cntidx =0;
    int x; scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x){
            cntidx=i;
            break;
        } 
        else{
            cntidx=-1;
        }
    }
    printf("%d",cntidx);
    return 0;
}