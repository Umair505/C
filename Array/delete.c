//এরের যেকোনো ইলিমেন্ট ডিলেট
#include<stdio.h>
int main()
{
     int n,position;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){//০ থেকে n এর আগ পর্যন্ত স্ক্যান করে নিলাম
        scanf("%d",&arr[i]);
    }
    scanf("%d",&position);//কোন পজিশনের উপাদান ডিলেট করবো ইনপুট নিলাম
    for(int i=position;i<n-1;i++){//পজিশনের ভ্যলু কে সামনে পাঠাতে থাকবো 
        arr[i] = arr[i+1];
    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }
    
    return 0;
}