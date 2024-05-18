


// Recursive function to calculate nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// Recursive function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
}

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci series: ");
    scanf("%d", &n);
    
    printf("Fibonacci series up to %d terms: ", n);
    printFibonacci(n);
    printf("\n");
    
    return 0;
}
