#include <stdio.h>
long long sum_squares_iter(int n) {
    long long sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (long long)i * i;
    }
    return sum;
}
long long sum_squares_rec(int n) {
    if (n <= 0) {
        return 0;
    }
    return (long long)n * n + sum_squares_rec(n - 1);
}
int main(void) {
    int n;
    printf("введите N: ");
    if (scanf("%d", &n) == 1 && n >= 0) {
        long long iter_res = sum_squares_iter(n);
        long long rec_res = sum_squares_rec(n);
        printf("итеративно (цикл):    %lld\n", iter_res);
        printf("рекурсивно (функция): %lld\n", rec_res);
    } else {
        printf("ошибка: введите целое неотрицательное число\n");
    }
    return 0;
}
/*
 * плюсы рекурсии: короткий и наглядный код, похожий на математическую формулу
 * минусы рекурсии: каждый вызов тратит память стека и замедляет работу; 
 * при большом N произойдет переполнение стека (stack overflow).
 * цикл (итерация) работает быстрее и практически не расходует память.
 */