#include<stdio.h>
int main()
{
    int width,height;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&width,&height);
        if(width==height){
            printf("Square\n");
        }
        else if(width!=height){
            printf("Rectangle\n");
        }
    }
    return 0;
}