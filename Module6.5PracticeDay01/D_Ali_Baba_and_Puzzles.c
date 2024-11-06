// //One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
//  numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
// ) between the other three numbers; so that each operator is used only once.

// a□b□c=d
#include<stdio.h>
int main(){
    long long int d,a,b,c;
    scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
    if(a+b*c==d){
        printf("YES");
    }
    else if(a+b-c==d){
    printf("YES");
    }
    else if(a-b+c==d){
    printf("YES");
    }
    else if(a-b*c==d){
    printf("YES");
    }
    else if(a*b+c==d){
    printf("YES");
    }
    else if(a*b-c==d){
    printf("YES");
    }
    
    else {
        printf("NO");
    }
    return 0;
}
