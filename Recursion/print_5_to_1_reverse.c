#include<stdio.h>
void fun(int i)
{   
    if(i==6) return;
    //first i=1 then o fun a k call korbe i=2 hoye jabe abar fun ke call i=3 eivabe i=4,5 hobe then jokhoni 6 hobe she return kore dibe
    //tarpor abar piche jabe gia fun(5)er niche ja print kora lagbe ta print korbe eirpor fun(4),fun(3),fun(2),fun(1)then main a gia return kore dibe
    fun(i+1);//5 4 3 2  porjontho print korbe 
    printf("%d ",i);//1
}
int main()
{
    fun(1);//agerbar amra 5 theke 1 porjontho print korar jonno 5 disilam i er man.Kintu eibar 1 dia dilam kintu amra print korbo 5 theke 1 porjontho 
    return 0;
}