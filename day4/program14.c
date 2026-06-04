#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter the position (n): ");
    scanf("%d", &n);

    if(n == 0) {
        printf("The %dth Fibonacci term is: %d\n", n, a);
        return 0;
    }

    for(i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }

    printf("The %dth Fibonacci term is: %d\n", n, b);
    return 0;
}
