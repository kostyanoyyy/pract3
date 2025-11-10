#include <stdio.h>

int main() {
    int a, b;
    int *ptr_a, *ptr_b;

    printf("Enter values for a and b: ");
    scanf("%d %d", &a, &b);

    ptr_a = &a;
    ptr_b = &b;

    *ptr_a = *ptr_a * 2; // увеличиваем a в 2 раза
    *ptr_b = *ptr_b / 2; // уменьшаем b в 2 раза

    printf("Updated values: a = %d, b = %d\n", a, b);

    return 0;
}
