#include<stdio.h>
#include<string.h>
int main()
{
    char a[200],b[100];
    scanf("%s %s",a,b);
    int k = strlen(a);
    strcat(a,b);//a er shate b lagai dibe
    printf("%s %s",a,b);
    return 0;
}
//input - Moinul Isalm
//output -MoinulIsalm Isalm