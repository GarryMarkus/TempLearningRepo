#include <stdio.h>

int main() {
    int k;
    printf("Enter size of array:\n");
    scanf("%d", &k);
    int array[k];
    printf("Enter elements of array:\n");
    for(int i=0; i<k; i++){
        scanf("%d", &array[i]);
    }
    int x;
    printf("Enter element to search:\n");
    scanf("%d", &x);
    int n = sizeof(array) / sizeof(array[0]);
    int index = -1;

    for (int i = 0; i < n; i++) {
        if (array[i] == x) {
            index = i;
            break;
        }
    }

    if (index != -1) {
        printf("Element found at index: %d\n", index);
    } else {
        printf("Element not found\n");
    }

    return 0;
}
