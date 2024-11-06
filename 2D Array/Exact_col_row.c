/*
1 2 3 
4 5 6   if exact =1; then output-Specific Row is:4 5 6
7 8 9
*/
#include<stdio.h>
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    int exactRow; scanf("%d",&exactRow);
    printf("Specific Row is:\n");
    for(int i=0;i<row;i++){
        printf("%d ",a[exactRow][i]);
    }
    printf("\n");

int exactCol; scanf("%d",&exactCol);
    printf("Specific col is:\n");
    for(int i=0;i<row;i++){
        printf("%d\n",a[i][exactCol]);
    }
    printf("\n");
    return 0;
}