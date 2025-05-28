#include <stdio.h>

int main() {
    int num;

    // Запрашиваем у пользователя целое число
    printf("Введите целое число: ");
    scanf("%d", &num);

    // Вывод результата (четное или нечетное)
    printf("%d\n", (num % 2 + 2) % 2);

    return 0;
}
