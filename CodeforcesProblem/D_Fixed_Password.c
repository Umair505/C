#include<stdio.h>
int main(){
int n;
//যখন ইনপুট কতপর্যন্ত নির্দিষ্ট করে বলে দিবেনা তখন আমরা while loop চালাই != End Of File(EOF) দিয়ে বাকিটা লুপের ভেতর কাজ করবো
while(scanf("%d",&n) != EOF){
if(n==1999){
    printf("Correct\n");
    break;
}else{
    printf("Wrong\n");
}
}
return 0;
}