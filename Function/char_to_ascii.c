#include<stdio.h>
void char_to_ascii(){
 char ch;
 scanf("%c",&ch);
 printf("%d",ch);
}
int main()
{
    char_to_ascii();
    return 0;
}
// Question: Make a function named char_to_ascii() which will take a character as parameter and it will convert that character 
// to ascii value and return through that function. So, the return type will be int. Now in the main function take a character
//  input and call that function to get the integer value of it and print that in the main function.
