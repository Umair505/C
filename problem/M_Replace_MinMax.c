#include<stdio.h>
#include<limits.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    int min=INT_MAX,max=INT_MIN;
    int mini=0,maxi=0;
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        if(max<arr[i]){
            max = arr[i];
            maxi= i;
        }
        if(min>arr[i]){
            min = arr[i];
            mini = i;
        }
    }
    arr[mini]=max;
    arr[maxi]=min;
    for(i=0;i<a;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
// Given a number N and an array A of N numbers. Print the array after doing the following operations:

// Find minimum number in these numbers.
// Find maximum number in these numbers.
// Swap minimum number with maximum number.
// Input
// First line contains a number N (2 ≤ N ≤ 1000) number of elements.

// Second line contains N numbers ( - 105 ≤ Ai ≤ 105)

// It's guaranteed that all numbers are distinct.

// Output
// Print the array after the replacement operation.

// Example
// inputCopy
// 5
// 4 1 3 10 8
// outputCopy
// 4 10 3 1 8