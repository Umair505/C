#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int psum = 0;
    int ssum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                psum +=a[i][j];
                continue;
            
            }
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i+j==n-1){
                ssum+=a[i][j];
            }
        }
    }
    int absoluteVal= abs(psum - ssum);
    printf("%d",absoluteVal);
    return 0;
}