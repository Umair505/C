#include<stdio.h>
int main()
{
    //char a[5]={'M','o','i','n','u'};
    // for(int i=0;i<5;i++){
    //     printf("%c",a[i]);
    // }
    char a[6] ="Moinu\0";//Null(\0) dewa lagbe nahoi last a altufaltu char print korbe (♀ a) 
    //kintu ami jodi age theke size ekta barai dia rakhi taile ar nul dewa lagbena karon "" dewar karone o nije thekei ekta null diye dibe
    // char a[6] ="Moinu";
    printf("%s",a);
    return 0;
}