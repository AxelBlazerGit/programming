#include <stdio.h>

// Function to calculate factorial
int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}

// Function to calculate sum of series
int sumOfSeries(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms in the series: ");
    scanf("%d", &n);
    
    printf("Sum of the series is: %d\n", sumOfSeries(n));
    return 0;
}
