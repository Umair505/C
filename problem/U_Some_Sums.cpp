#include <iostream>

int main() {
    int N, A, B;
    std::cin >> N >> A >> B;

    int totalSum = 0;

    for (int i = 1; i <= N; ++i) {
        int num = i;
        int digitSum = 0;

        while (num > 0) {
            digitSum += num % 10;
            num /= 10;
        }

        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }

    std::cout << totalSum << std::endl;

    return 0;
}
