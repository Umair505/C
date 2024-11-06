#include<stdio.h>
void  change_it(int a[],int n)
{
   for(int i=0;i<n;i++){
    printf("%d ",a[i]);
   }      
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    change_it(a,n);
    return 0;
}