#include <stdio.h>

void fun(int x) {
    if (x == 0) return;
    printf("%d", x); // Remove the space here
    if (x > 1) {
        printf(" "); // Add space here if x is not 1
    }
    fun(x - 1);
    return;
}

int main() {
    int n;
    scanf("%d",&n);
    fun(n);
    return 0;
}
