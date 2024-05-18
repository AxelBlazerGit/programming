#include <stdio.h>

int sumOfNumbersDivisibleBy7(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        if (i % 7 == 0) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start = 10, end = 50;
    printf("Sum of numbers divisible by 7 between %d and %d is %d\n", start, end, sumOfNumbersDivisibleBy7(start, end));
    return 0;
}
