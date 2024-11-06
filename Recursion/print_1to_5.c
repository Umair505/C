#include<stdio.h>
void fun(int i)
{  
    if(i==6) return;//যখনই আই এর মান ৬ হবে তখনই থেমে যাবে
    printf("%d\n",i);
    fun(i+1);
}
int main()
{
    fun(1);
    return 0;
}