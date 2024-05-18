#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    int N;
    float x;
    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);
    printf("Enter the value of N: ");
    scanf("%d", &N);

    float sum = 0;
    for (int i = 0; i <= N; ++i) {
        sum += pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
    }

    printf("sin(%.7f) = %.7f\n", x, sum);
    return 0;
}
