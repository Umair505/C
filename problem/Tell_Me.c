#include<stdio.h>
int main()
{  int n; scanf("%d",&n);//test case er jonno ekta loop
   for(int i=0;i<n;i++){
   int a; scanf("%d",&a);
   int arr[a];
   for(int i=0;i<a;i++){scanf("%d",&arr[i]);}//ashol code eikha theke ekta array input nisi
   int x; scanf("%d",&x);
   int count1=0;//count variable nisi x value ta ache kina check korar jonno
   for(int i=0;i<a;i++){
    if(arr[i]==x){
       count1++;//jodi thake taile ++ korsi mane count = count +1=1 hobe true false er moto 0 hote false 1 true
    }
   }
   if(count1){//count 1 hole yes ar nahoi no
    printf("YES\n");
   }
   else{printf("NO\n");}
   }
    return 0;
}

// Problem Statement

// You will given an integer array A and the size N. You will also be given an integer value X. You need to tell if X was appeared in the array. If X has appeared then print "YES", otherwise print "NO".

// Input Format

// First line will contain T, the number of test cases.
// First line of each test case will contain N.
// Second line of each test case will contain the integer array A.
// Third line of each test case will contain X.
// Constraints

// 1 <= T <= 1000
// 1 <= N <= 10000
// 0 <= A[i] <= 10^9; Here 0 <= i < N
// 0 <= X <= 10^9
// Output Format

// Output "YES" or "NO" according to the question.
// Sample Input 0

// 2
// 6
// 1 2 3 4 5 6
// 3
// 5
// 10 20 30 40 50
// 70
// Sample Output 0

// YES
// NO