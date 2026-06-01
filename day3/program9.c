//Write a program to Check whether a number is prime.//

#include <stdio.h>

int main() {
    int n, i, Prime = 1;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    
    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        Prime = 0;
    }
    // 2 is prime
    else if (n == 2) {
        Prime = 1;
    }
    // Even numbers (except 2) are not prime
    else if (n % 2 == 0) {
        Prime = 0;
    }
    // Check odd divisors up to sqrt(n)
    else {
        for (i = 3; i <= n/2 ; i += 2) {
            if (n % i == 0) {
                Prime = 0;
                break;
            }
        }
    }
    
    if (Prime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
    
    return 0;
}
