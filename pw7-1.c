#include <stdio.h>
int main(void) {
    int c;
    int prev = EOF;
    while ((c = getchar()) != EOF) {
        if (c != prev) {
            putchar(c);
            prev = c;
        }
    }
    return 0;
}