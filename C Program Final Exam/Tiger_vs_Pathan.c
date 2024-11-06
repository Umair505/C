#include<stdio.h>
int main()
{
    int test; 
   
    scanf("%d",&test);
   
    for(int i=0;i<test;i++)
    {   
        int n;
        scanf("%d",&n);
        char s[n+1];
        scanf("%s",s);;
     int countT = 0;
     int countP = 0;
    
    for(int i=0;i<n;i++){
        if(s[i]=='T'){
            countT++;
        }
        else if(s[i]=='P'){
         countP++;
        }
    }
    if(countT>countP){
        printf("Tiger\n");
    }
    else if(countP>countT){
        printf("Pathaan\n");
    }
    else{
        printf("Draw\n");
    }

    }
    

    return 0;
}