#include <stdio.h>

int main() {
    int i, j, space, rows;
    rows = 5;

    for(i = 1; i <= rows; i++) {
        for(space = 1; space <= rows - i; space++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("%c", 'A' + j - 1);
        }
        for(j = i - 1; j >= 1; j--) {
            printf("%c", 'A' + j - 1);
        }
        printf("\n");
    }

    return 0;
}
