#include <stdio.h>
int add_numbers(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", add_numbers(num1, num2));
    return 0;
}
