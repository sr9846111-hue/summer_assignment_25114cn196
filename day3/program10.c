 //Write a program to Print prime numbers in a range.//
#include <stdio.h>
int main() {
    int lower, upper, i, j, Prime;
    
    printf("Enter the lower and upper limits: ");
    scanf("%d %d", &lower, &upper);
    
    printf("Prime numbers between %d and %d are:\n", lower, upper);
    
    for (i = lower; i <= upper; i++) {
        if (i <= 1) {
            continue; // Skip numbers less than or equal to 1
        }
        
        Prime = 1; // Assume i is prime
        
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                Prime = 0; // i is not prime
                break;
            }
        }
        
        if (Prime) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    
    return 0;
}
