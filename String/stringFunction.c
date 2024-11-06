#include<stdio.h>
int my_len(char ch[]){
    int count =0;
    for(int i=0;ch[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}
int main()
{
    char ch[100];
    scanf("%s",ch);
    my_len(ch);
    return 0;
}