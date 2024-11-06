#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int k = strlen(a);
    for(int i=0;i<=strlen(b);i++)
    {
      a[k]=b[i];
      k++;
    }
    //nirdishto poriman copy korar khetre
    // for(int i=0;i<=2;i++)
    // {
    //   a[k]=b[i];
    //   k++;
    // }
    // a[8] ='\0';//nul dewa lagbe nahoi garbage value dibe
    // //output-appleora orange

    printf("%s %s",a,b);
    return 0;
}

//input-apple orange
//output-appleorange orange
//shurute k=5;loop a i er man 0 theke 5 porjontho jabe
//a[5]=b[0]. mane appleorange hobe ber shobgula amra a er moddhe copy korsi---index 0 1 2 3 4 5 6 7 8 9 10(\0 null)
//k++ disi karon k o barbe 1 kore thats mean a[6],a[7] eivabe cholte thakbe