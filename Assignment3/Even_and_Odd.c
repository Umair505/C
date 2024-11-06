#include<stdio.h>
void odd_even(){
    int n;
    scanf("%d",&n);
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
   
    int cntodd=0;
    int cnteven=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            cnteven++;
        }
        else{
            cntodd++;
        }
    }
    printf("%d %d",cnteven,cntodd);
}
int main()
{
    odd_even();
    return 0;
}


//array element koita odd koit even ache oita print kora lagbe
//input --5              6
//1 2 3 4 5              0 4 0 6 5 3 

//output--2 3            4 2