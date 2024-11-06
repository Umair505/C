#include<stdio.h>
int main()
{
    float dis,afterD;
    scanf("%f %f",&dis,&afterD);
    double realP= (afterD*100.00)/(100.00-dis);
    printf("%.2f",realP);
    return 0;
}