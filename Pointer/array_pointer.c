#include<stdio.h>
int main()
{
    int ar[4]={10,20,30,40};//array is a pointer
    printf("%d\n",ar[0]);
    printf("%d\n",*ar);
    printf("%d\n",1[ar]);
    // ar[1]--->*ar(ar+1)
    // *(ar+1)--->ar[1]--->1[ar]


    return 0;
}