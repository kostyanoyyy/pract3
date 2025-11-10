#include <stdio.h>
#include <stdlib.h>

int main() {
    float *ptr1, *ptr2, *ptr3;

    // Выделение памяти
    ptr1 = (float*)malloc(sizeof(float));
    ptr2 = (float*)malloc(sizeof(float));
    ptr3 = (float*)malloc(sizeof(float));

    if (ptr1 == NULL || ptr2 == NULL || ptr3 == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    *ptr1 = 5.6f;
    *ptr2 = 7.3f;

    printf("Before swapping: ptr1 = %.2f, ptr2 = %.2f\n", *ptr1, *ptr2);

    // Поменять местами значения
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: ptr1 = %.2f, ptr2 = %.2f\n", *ptr1, *ptr2);

    // Освобождение памяти
    free(ptr1);
    free(ptr2);
    free(ptr3);

    return 0;
}
