#include <stdio.h>

int main() {
    int n, i, j, sum;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the sum to find: ");
    scanf("%d", &sum);

    int found = 0;  

    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == sum) {
                printf("Pair found: %d + %d = %d\n", arr[i], arr[j], sum);
                found = 1;
            }
        }
    }

    if(!found) {
        printf("No pair found with sum %d\n", sum);
    }

    return 0;
}
