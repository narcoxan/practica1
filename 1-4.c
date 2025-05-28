#include <stdio.h>

int main() {
    int n;
    // Вводим целое число
    printf("Введите число: ");
    scanf("%d", &n);
    // Проверяем, является ли число степенью двойки
    int result = (n > 0) && ((n & (n - 1)) == 0);
    // Выводим результат
    printf("%d\n", result);
    return 0;
}
