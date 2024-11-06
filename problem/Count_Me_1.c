#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count1 = 0,count2 =0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            count1++;
           continue;;
        }
        if(arr[i]%3==0){
            count2++;
        }
    } printf("%d %d",count1,count2);

    return 0;
}

// You will be given an integer array A of size N. You need to count the number of elements that are divided by 2 and number of elements that are divided by 3. If any number is divided by both 2 and 3, then consider it only for 2.

// Input Format

// First line will contain N, the size of the array
// Second line will contain the array A.
// Constraints

// 1 <= N <= 10^5
// 0 <= A[i] <= 10^9; here 0 <= i < N
// Output Format

// Output the number of elements that are divided by 2 first, then print the number of elements that are divided by 3.
// Sample Input 0

// 5
// 1 4 2 5 3
// Sample Output 0

// 2 1
// Sample Input 1

// 4
// 6 9 12 15
// Sample Output 1

// 2 2