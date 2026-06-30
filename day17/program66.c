#include <stdio.h>

int main() {
    int arr1[50], arr2[50], unionArr[100];
    int size1, size2, i, j, k = 0;
    int found;

    printf("Enter size of first array: ");
    scanf("%d", &size1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < size1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d", &size2);
    
    printf("Enter elements of second array:\n");
    for(i = 0; i < size2; i++) {
        scanf("%d", &arr2[i]);
    }
    for(i = 0; i < size1; i++) {
        unionArr[k] = arr1[i];
        k++;
    }
    for(i = 0; i < size2; i++) {
        found = 0;
        for(j = 0; j < k; j++) {
            if(arr2[i] == unionArr[j]) {
                found = 1;
                break;
            }
        }
        if(found == 0) {
            unionArr[k] = arr2[i];
            k++;
        }
    }
    printf("Union of arrays is:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}
