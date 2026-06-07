#include <stdio.h>

// Recursive function to calculate sum of digits
int sumOfDigits(int n) {
    if (n == 0)  // base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10);  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is %d\n", num, sumOfDigits(num));
    return 0;
}
