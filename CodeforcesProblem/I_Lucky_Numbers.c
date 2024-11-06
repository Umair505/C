//A number of two digits is lucky if one of its digits is divisible by the other.
#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int first= x%10;
    int second= x/10;
    if(first%second==0 ||second % first==0){
        printf("YES");
    }
    else{printf("NO");}
    return 0;
}