#include <stdio.h>

// Recursive function to reverse a number
int reverseNumber(int n, int rev) {
    if (n == 0)  // base case
        return rev;
    return reverseNumber(n / 10, rev * 10 + (n % 10));  // recursive call
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reversed number: %d\n", reverseNumber(num, 0));
    return 0;
}
