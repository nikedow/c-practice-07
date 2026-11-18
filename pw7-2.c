#include <stdio.h>
#include <ctype.h>
int main(void) {
    int c;
    int state = 0;
    int tion_count = 0;
    int total_chars = 0;
    while ((c = getchar()) != EOF) {
        total_chars++;
        if (!isalpha(c)) {
            state = 0;
        } 
        else {
            switch (state) {
                case 0:
                    if (c == 't') state = 1;
                    break;
                case 1:
                    if (c == 'i') state = 2;
                    else if (c == 't') state = 1;
                    else state = 0;
                    break;
                case 2:
                    if (c == 'o') state = 3;
                    else if (c == 't') state = 1;
                    else state = 0;
                    break;
                case 3:
                    if (c == 'n') {
                        tion_count++;
                        state = 0;
                    }
                    else if (c == 't') state = 1;
                    else state = 0;
                    break;
            }
        }
    }
    printf("количество вхождений \"tion\": %d\n", tion_count);
    printf("всего обработано символов: %d\n", total_chars);
    return 0;
}
/*
 * в стандартной библиотеке <ctype.h> есть только функции isalpha() и isdigit()
 * Функции isletter() в языке С не существует, а isnumber() - это 
 * нестандартное расширение (работает только на macOS/BSD, в linux GCC её нет).
 */