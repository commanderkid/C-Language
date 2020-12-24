#include <stdio.h>

char change_char(char);

void main(void) {
    char ch = '\n';
    do {
        ch = getchar();
        ch = change_char(ch);
        putchar(ch);
    } while (ch != '\n');
}

char change_char(char current_char) {
    switch(current_char) {
        case '\t':
            return '\\';
        case '\b':
            return '\\';
        default:
            return current_char;
    }
}
