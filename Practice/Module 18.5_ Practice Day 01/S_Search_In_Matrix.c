#include<stdio.h>
int main()
{
    int m,n; scanf("%d %d",&m,&n);
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int x; scanf("%d",&x);
    int flag =0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(a[i][j]==x){
            flag =1;
           }
        }
    }
    if(flag ==1){
        printf("will not take number");
    }
    else{
        printf("will take number");
    }
    return 0;
}