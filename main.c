#include <stdio.h>

int main() {
    int min;
    int max;
    int val;

    printf("Добро пожаловать в мою программу для проверки нахождения целого числа в диапазоне\n\n");
    printf("Задайте диапазон значений:\n\n\n");

    printf("Введите минимум: ");
    scanf("%d", &min);
    printf("Мой минимум: %d\n", min);

    printf("Введите максимум: ");
    scanf("%d", &max);
    printf("Мой максимум: %d\n", max);

    if (min <= max) {
        printf("А теперь введите число: ");
        scanf("%d", &val);

        if ((val >= min) && (max >= val)) {
            printf("Число в пределах диапазона.\n");
        } else {
            printf("Число за пределами диапазона!!!\n");
        }
    } else {
        printf("Ошибка!!! Минимум должен быть ниже или равен максимуму");
    }

    return 0;
}