#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the start of range: ");
    scanf("%d", &start);

    printf("Enter the end of range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for(int num = start; num <= end; num++) {
        int original = num, temp = num, remainder, result = 0, digits = 0;

        while(temp != 0) {
            temp /= 10;
            digits++;
        }
        temp = num;
        while(temp != 0) {
            remainder = temp % 10;

            // Compute remainder^digits manually
            int power_val = 1;
            for(int i = 0; i < digits; i++) {
                power_val *= remainder;
            }

            result += power_val;
            temp /= 10;
        }

        if(result == original) {
            printf("%d ", original);
        }
    }

    return 0;
}
