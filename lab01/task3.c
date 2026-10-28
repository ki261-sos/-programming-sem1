#include <stdio.h>
#include <windows.h>

int main(void) {
  SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double f, C, Xc;
    const double PI = 3.141592653589793;

    printf("Введіть частоту сигналу f (Гц): ");

    if (scanf("%lf", &f) != 1) {
        printf("Помилка: введіть правильне число\n");
        return 1;
    }

    printf("Введіть ємність конденсатора C (Ф): ");

    if (scanf("%lf", &C) != 1) {
        printf("Помилка: введіть правильне число\n");
        return 1;
    }

    if (f <= 0 || C <= 0) {
        printf("Помилка: частота та ємність мають бути додатними\n");
        return 1;
    }

    Xc = 1.0 / (2.0 * PI * f * C);

    printf("Реактивний опір конденсатора: %.3f Ом\n", Xc);

    return 0;
}