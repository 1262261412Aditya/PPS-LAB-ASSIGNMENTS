#include <stdio.h>

unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

unsigned long long factorial_recursive(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (unsigned long long)n * factorial_recursive(n - 1);
}

int main() {
    int num;

    printf("Enter a non-negative integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Invalid input! Please enter a non-negative integer.\n");
        return 1;
    }

    printf("Factorial without recursion: %llu\n", factorial_iterative(num));
    printf("Factorial with recursion: %llu\n", factorial_recursive(num));

    return 0;
}