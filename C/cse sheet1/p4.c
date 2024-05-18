#include <stdio.h>

int main() {
    int n, first = 0, second = 1, next, sum = 0;
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("Fibonacci Series up to %dth Term: ", n);
    printf("%d + %d", first, second);
    sum += first + second;
    for (int i = 3; i <= n; i++) {
        next = first + second;
        printf(" + %d", next);
        sum += next;
        first = second;
        second = next;
    }
    printf("\n");
    printf("Sum = %d\n", sum);
    
    return 0;
}
