//একটি এরের যেকোনো জায়গাই কোনো ভ্যালু ইন্সার্ট করা লাগবে।
#include<stdio.h>
int main()
{
    int n,position,val; //এরের সাইজ , কোন পজিশনে ভ্যলু দিবো তার পজিশন,কত দিবো তা ডিক্লার করে স্ক্যান করে নিলাম
    scanf("%d",&n);
    int arr[n+1];//১ বেশি দিসি যাতে একটা ঘর খালি থাকে ইন্সার্টের জন্য
    for(int i=0;i<n;i++){//০ থেকে n এর আগ পর্যন্ত স্ক্যান করে নিলাম
        scanf("%d",&arr[i]);
    }
    scanf("%d %d",&position,&val);
    for(int i=n;i>=position+1;i--){
        arr[i] = arr[i-1];//আমরা প্রতিবার শেষ থেকে একটা একটা ঘর আগাই যাচ্ছি। মানে খালি ঘরে আমরা এর আগের ঘরের ভ্যলু দিয়ে দিবো এইভাবে চলতে থাকবে পজিশনের আগ পর্যন্ত arr[5]=arr[4]
    }
    arr[position] = val;//যে পজিশনে যত দিবো তা দিয়ে দিলাম
    for(int i=0;i<=n;i++){//তারপর প্রিন্ট করে দিলাম 
        printf("%d ",arr[i]);
    }
    
    return 0;
}
// Just copy this number and enter the button then see the result
// 5
// 1 2 3 4 5
// 1 100