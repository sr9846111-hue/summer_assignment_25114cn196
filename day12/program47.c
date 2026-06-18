#include <stdio.h>
void fibonacci(int n) {
    int a = 0, b = 1, next;
    printf("Fibonacci series: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}
int main() {
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);

    fibonacci(num);
    return 0;
}
