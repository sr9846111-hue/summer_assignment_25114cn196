#include <stdio.h>
int main() {
    int num1, num2, lcm;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Find the greater of the two numbers
    int max = (num1 > num2) ? num1 : num2;
    
    // Loop from max to the product of num1 and num2 to find the least common multiple
    for (int i = max; i <= num1 * num2; i++) {
        if (i % num1 == 0 && i % num2 == 0) {
            lcm = i; // Update lcm if i is a common multiple
            break; // Break the loop once the first common multiple is found
        }
    }
    
    printf("LCM of %d and %d is: %d\n", num1, num2, lcm);
    
    return 0;
}



