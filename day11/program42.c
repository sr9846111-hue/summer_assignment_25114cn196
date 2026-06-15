#include <stdio.h>
int find_max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int main() {
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Maximum = %d\n", find_max(num1, num2));
    return 0;
}
