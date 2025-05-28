#include <stdio.h>

int main() {
    int a, b, c;

    // Запрашиваем три числа у пользователя
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);

    // Вычисление знака произведения
    int vichislenie = (a == 0 || b == 0 || c == 0) ? 0 : ((a > 0) + (b > 0) + (c > 0)) % 2 == 0 ? -1 : 1;

    // Вывод результата
    printf("%d\n", vichislenie);

    return 0;
}
