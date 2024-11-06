#include<stdio.h>
int main()
{
    int n,k=1;//eikhane line hocche n er shoman n er man 4 hole 4 ta line hobe. K er man ekbari 1 hobe tai 1 initialize korsi
    scanf("%d",&n);
    for(int i=0;i<n;i++){
         for(int j=0;j<k;j++){//k er maan first a one tai ekbar * print hobe
            printf("*");
         }//loop shesh howar por dekhteche k++ tai k er man aro ek barbe bere 2 hobe tarporer line * duibar print hobe eivabe cholte thakbe
         k++;// protita line sheshe k ek kore barbe
         printf("\n");//protthek bar new line print korbe
    }
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int n;
//     scanf("%d",&n);
//     int k=n;

//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             printf("*");
//         }
//         k--;
//         printf("\n");
//     }
//     return 0;
// }
