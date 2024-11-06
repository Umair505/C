#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    int min=INT_MAX;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    int count =0;
     for(int i=0;i<n;i++){
        if(min==a[i]){
            count++;
        }
    }
    if(count%2==0){
        printf("Unlucky");
    }
    else{
        printf("Lucky");
    }
    return 0;
}