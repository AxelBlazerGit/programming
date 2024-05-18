#include <stdio.h>

void generateFibonacci(int n) {
    int prev = 0, current = 1, next;
    printf("Fibonacci series up to %d terms: ", n);
    for (int i = 1; i <= n; ++i) {
        printf("%d ", prev);
        next = prev + current;
        prev = current;
        current = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    generateFibonacci(n);
    return 0;
}
