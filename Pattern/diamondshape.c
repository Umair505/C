#include<stdio.h>
int main()
{
    int n,s,k;
    scanf("%d",&n);
    s = n-1;
    k=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=s;j++){
            printf(" ");
        }
        for(int j=1;j<=k;j++){
            printf("*");
        }
        if(i<=n-1){
            s--;
            k=k+2;
        }
        else{
            s++;
            k=k-2;
        }
        printf("\n");
    }
    return 0;
}
//    *//space prothom n-1 poriman chilo tarpor ek kore komtese
//   ***
//  *****//eto tuku porjonto k er man 2 kore barse//n-1 porjontho k=k+2;space--;
//   ***//eikhan theke ker man koma shuru korse//eikhane amra arekta condition apply korbo;n er man er por theke k-=2;space++;
//    *