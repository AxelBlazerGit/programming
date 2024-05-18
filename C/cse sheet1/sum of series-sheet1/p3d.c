#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    float sum = 0;
    for (int i = 0; i <= N; ++i) {
        sum += 1.0 / (3 << i);
    }

    printf("Sum of the series: %.7f\n", sum);
    return 0;
}
