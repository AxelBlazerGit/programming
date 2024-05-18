#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    float sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += 1.0 / factorial(i);
    }

    printf("Sum of the series: %.7f\n", sum);
    return 0;
}
