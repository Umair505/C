#include<stdio.h>
void fun(int a[],int n,int idx){
    if(idx < 0) { //যখনই ইন্ডেক্স ০ নিচে যাবে তখন রিকার্শন থেমে যাবে
        return;
    }
    if(idx % 2 == 0){
        printf("%d ",a[idx]);//জোড় ইন্ডেক্স এর এরে কে প্রিন্ট করতেছি
    } 
    fun(a,n,idx-1);//বার বার কল করতেছি আর ইন্ডেক্স এক করে কমাচ্ছি
}
int main()
{
    int n; scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(a,n,n-1);//এইখানে আমরা n-1  দিয়ে ইন্ডেক্সট টা পাঠায়ছি ফাংশন কে

    return 0;
}



// #include<stdio.h>

// int main()
// {
//     int n; scanf("%d",&n);
//     int a[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=n-1;i>=0;i--){
//         if(i%2==0){
//             printf("%d ",a[i]);
//         }
//     }
//     return 0;
// }