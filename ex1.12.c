#include <stdio.h>

void main(void){
    char new_char = '\0';
    while('\n' != new_char) {
        new_char = getchar();
        if (' ' == new_char)
            putchar('\n');
        else
            putchar(new_char);
    }
}
