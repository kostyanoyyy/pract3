#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = 0, count = 0;
    printf("Negative elements: ");
    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            printf("%d ", arr[i]);
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        printf("\nAverage of negative elements: %.2f\n", (float)sum / count);
    } else {
        printf("\nNo negative elements found\n");
    }

    free(arr);
    return 0;
}
