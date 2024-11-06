#include<stdio.h>
int main()
{

    int n,row,col;
    scanf("%d",&n);
    if(n%2==1){
    for(int row=1;row<=((n+1)/2)+5;row++){
        for(col=1;col<=((n+1)/2)+5-row;col++){
            printf(" ");
        }
        for(int col=1;col<=2*row-1;col++){
            printf("*");
        }
        
        printf("\n");
        
    }
    }
    for(int row=1;row<=5;row++){
        for(int col=1;col<=5;col++){
            printf(" ");
        }
        for(int col=1;col<=n;col++){
            printf("*");
        } printf("\n");
    }
    
    return 0;
}