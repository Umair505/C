#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
   double a; scanf("%lf",&a);
//ceil
   int ans =ceil(a);
   printf("%d\n",ans);//input - 3.1,3.000,3.00001 output- 4,3,4
//floor
    ans =floor(a);
   printf("%d\n",ans);//input - 3.1,3.000,3.00001 output- 3,3,3
//round 
    ans =round(a);
   printf("%d\n",ans);//input - 3.1,3.450,3.51 output- 3,3,4 // .5 howa matro o 4 kore dibe .4999 thakle 3 dibe kintu .5 how matro 4 kore dibe
//Squar Root
// double x; scanf("%lf",&x);
// double ans =sqrt(x);
// printf("%.2lf",ans);
//Power
// int a,b; scanf("%d %d",&a,&b);
// int ans =pow(a,b);
// printf("%d",ans);
// //Absolute value eitar jonno arekta library function lagbe <stdlib.h>
// int a; scanf("%d",&a);
// int ans= abs(a);
// printf("%d",ans);// -value dle + value dibe
    return 0;
}