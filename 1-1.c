#include <stdio.h>

int main() {
    float celsya, farengeit;

    // Запрашиваем у пользователя температуру в градусах Цельсия
    printf("Введите температуру в градусах Цельсия: ");
    scanf("%f", &celsya);

    // Преобразование в градусы Фаренгейта
    farengeit = (celsya * 9 / 5) + 32;
    
    // Вывод результата
    printf("C = %.2f ; F = %.2f\n", celsya, farengeit);
    
    return 0;
}
