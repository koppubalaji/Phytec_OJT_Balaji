#include <stdio.h>

// Function declaration (prototype)
int fibonacci(int n);

int main() {
    // Input the number of terms in the Fibonacci sequence
    int n;

    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    // Display the Fibonacci sequence
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}

// Function definition
int fibonacci(int n) {
    // Base cases: Fibonacci of 0 is 0, Fibonacci of 1 is 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

