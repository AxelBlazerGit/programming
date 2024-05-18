#include <stdio.h>

// Recursive function to find GCD of two numbers
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Recursive function to find GCD of three numbers
int gcdOfThree(int a, int b, int c) {
    return gcd(gcd(a, b), c);
}

int main() {
    int num1, num2, num3;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    printf("Final GCD of input integers %d,%d and %d is: %d\n", num1, num2, num3, gcdOfThree(num1, num2, num3));
    
    return 0;
}
