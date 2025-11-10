#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void selection_sort(float *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                float temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *b = (int*)malloc(n * sizeof(int));
    float *c = (float*)malloc(n * sizeof(float));
    int count = 0;

    printf("Enter elements of array b: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        if (b[i] > 0) {
            c[count] = sqrt(b[i]) / 5;
            count++;
        }
    }

    selection_sort(c, count);

    printf("Array C (sorted): ");
    for (int i = 0; i < count; i++) {
        printf("%.2f ", c[i]);
    }

    free(b);
    free(c);
    return 0;
}
