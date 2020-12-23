#include <stdio.h>

void main(void) {
    char text[] = "one two  three   tab\ttab\tand\n\n";

    long long start = 0;

    int tab     = 0;
    int space   = 0;
    int newLine = 0;

    while('\0' != text[start]){
        switch (text[start])
        {
            case '\t': tab++;     break;
            case '\n': newLine++; break;
            case ' ' : space++;   break;
            default  :            break;
        }
        start++;
    }
    
    printf("This text is contains:\n");
    printf("tabs- %d,\t spaces- %d,\t new lines- %d\t\n", tab, space, newLine)
}
