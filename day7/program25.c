#include <stdio.h>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)  // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %llu\n", num, factorial(num));
    return 0;
}
