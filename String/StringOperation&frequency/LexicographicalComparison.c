#include<stdio.h>
int main()
{
    char a[1000],b[1000];
    scanf("%s %s",a,b);
    int i=0;
    while(1)//infinite loop
    {
        if(a[i]=='\0' && b[i]=='\0')
        {
            printf("Same");
            break;
        }
        else if(a[i]=='\0')
        {
            printf("A choto");
            break;
        }
          else if(b[i]=='\0')
        {
            printf("B choto");
            break;
        }//etotuku amra null ache kina check korsi
      
      if(a[i]==b[i]){
        i++;//shamne agao & dekho kon string ta choto
      }
       else if(a[i]<b[i]){
        printf("A choto\n");
        break;

       }    
       else{
        printf("B Choto\n");
        break;
       }
    }
    return 0;
}