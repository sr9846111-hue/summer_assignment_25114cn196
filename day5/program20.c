#include <stdio.h>

int main() {
    long long num;
    long long largestPrime = -1;

    printf("Enter a number: ");
    scanf("%lld", &num);

    // Divide by 2 until odd
    while (num % 2 == 0) {
        largestPrime = 2;
        num /= 2;
    }

    // Divide by odd numbers
    for (long long i = 3; i <= num; i += 2) {
        while (num % i == 0) {
            largestPrime = i;
            num /= i;
        }
    }

    printf("Largest Prime Factor: %lld\n", largestPrime);

    return 0;
}
