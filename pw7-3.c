#include <stdio.h>
double calc(double a, double b) {
    double fact_a = 1.0;
    for (int i = 1; i <= (int)a; i++) {
        fact_a = fact_a * i;
    }
    double fact_b = 1.0;
    for (int i = 1; i <= (int)b; i++) {
        fact_b = fact_b * i;
    }
    return fact_a + fact_b;
}
int main(void) {
    double a, b;
    while (scanf("%lf %lf", &a, &b) == 2) {
        if (a < 0 || b < 0) {
            printf("Ошибка: числа не могут быть отрицательными!\n");
            continue;
        }
        double result = calc(a, b);
        printf("%.4f\n", result);
    }
    return 0;
}