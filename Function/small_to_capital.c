#include<stdio.h>
int small_to_capital(){
    char c;
    scanf("%c",&c);
    if(c>='a' && c<='z'){
        int res = c-32;
        return res;
    }
}

int main()
{
    int result = small_to_capital();
    printf("%c\n",result);
    int result1 = capital_to_small();
    printf("%c\n",result1);
    return 0;
}
// Question: Make a function named small_to_capital() which will take a small alphabet as a 
// parameter (which is a character) and it will convert that small alphabet to capital alphabet and return through 
// that function. So, the return type will be char. Now in the main function take a character input which will be small
//  alphabets and call that function to get the capital alphabet and print that in the main function.
#include<stdio.h>
int capital_to_small(){
    char c2;
    scanf("%c",&c2);
    if(c2>='A' && c2<='Z'){
        int res1=c2+32;
        return res1;
    }
}
int main()
{
    int result1 = capital_to_small();
    printf("%c\n",result1);
    return 0;
}
// Question: Make a function named capital_to_small() which will take a capital alphabet as an argument,