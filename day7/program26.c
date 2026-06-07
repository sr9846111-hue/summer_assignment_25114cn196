#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)  // base case
        return 0;
    else if (n == 1)  // base case
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);

    printf("Fibonacci series: ");
    for (int i = 0; i < terms; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
