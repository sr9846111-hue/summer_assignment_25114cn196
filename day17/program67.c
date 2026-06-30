#include <stdio.h>

int main() {
    int arr1[50], arr2[50], interArr[50];
    int size1, size2, i, j, k = 0;

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
        for(j = 0; j < size2; j++) {
            if(arr1[i] == arr2[j]) {
            
                int found = 0;
                for(int m = 0; m < k; m++) {
                    if(interArr[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if(found == 0) {
                    interArr[k] = arr1[i];
                    k++;
                }
            }
        }
    }

    if(k == 0) {
        printf("No common elements.\n");
    } else {
        printf("Intersection of arrays is:\n");
        for(i = 0; i < k; i++) {
            printf("%d ", interArr[i]);
        }
    }

    return 0;
}
