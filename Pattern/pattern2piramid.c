//    * //eikhane n=4 kintu first line a space 3 ta tai amra niche space n-1 disi loop ta 0 theke n-1 porjontho cholbe 
//   *** 
//  *****
// *******
#include<stdio.h>
int main()
{
    int n,space,k;
    scanf("%d",&n);
    space = n -1;
    k =1;
    for(int i=0;i<n;i++){
        for(int j=0;j<space;j++){
            printf(" ");
        }
        for(int j=0;j<k;j++){
            printf("*");
        }
        //line shesh
        space--;//prottek line a space ek kore komteche
        k=k+2;//star 2 ta kore bartese
        printf("\n");
    }
    return 0;
}
// #include<stdio.h>
// int main()
// {
//     int n,space,k;
//     scanf("%d",&n);
//     space = n-1;
//     k = n*2-1;
//     for(int i=0;i<n;i++){
//         for(int j=0;j<space;j++){
//             printf(" ");
//         }
//         for(int j=k;j>=1;j--){
//             printf("*");
//         }
//         space++;
//         k=k-2;
//         printf("\n");
//     }
//     return 0;
// }
//    *******
//     ***** 
//      ***
//       *