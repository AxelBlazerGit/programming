#include <stdio.h>

int main() {
    int N;
    printf("Enter the value of N: ");
    scanf("%d", &N);

    int sum = 0;
    for (int i = 1; i <= N; ++i) {
        sum += i;
    }

    printf("Sum of the series: %d\n", sum);
    return 0;
}
