#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0;  // 0 and 1 are not prime
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return 0;  // If divisible by any number other than 1 and itself, not prime
    }
    return 1;  // Prime otherwise
}

int sumOfPrimesInRange(int start, int end) {
    int sum = 0;
    for (int i = start; i <= end; ++i) {
        if (isPrime(i)) {
            sum += i;
        }
    }
    return sum;
}

int main() {
    int start = 1, end = 20;
    printf("Sum of prime numbers between %d and %d is %d\n", start, end, sumOfPrimesInRange(start, end));
    return 0;
}
