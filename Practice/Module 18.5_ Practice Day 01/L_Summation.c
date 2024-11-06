#include <stdio.h>

int calculateSum(int arr[], int n) {
    // Base case: If the array is empty (n is 0), return 0.
    if (n == 0) {
        return 0;
    } else {
        // Recursively call the function for the subarray without the last element.
        return arr[n - 1] + calculateSum(arr, n - 1);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = calculateSum(arr, n);

    printf("%d\n", sum);

    return 0;
}
