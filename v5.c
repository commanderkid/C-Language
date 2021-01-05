#include <stdio.h>
#include <stdlib.h>

void main(void) {
    system("chcp1251>nul");
    int number;
    char character;
    int* p_number = &number;
    char* p_character = &character;
    number = 10;
    character = 'A';
    printf("number is %d, character is %c\n", *p_number, *p_character);
    *p_number = 11;
    *p_character = 'B';
    printf("number is %d, character is %c", number, character);
    system("pause>nul");
}
