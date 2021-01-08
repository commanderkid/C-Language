// Расчет числа фиобоначи, используя цикл While
#include <stdlib.h>
#include <stdio.h>

void main(void) {
    system("chcp 1251<nul");
    int numberFibonacci;
    printf("Put number of fibonacci: ");
    scanf("%d", &numberFibonacci);
    int initial_fibonacci = numberFibonacci;
    int k = 1;
    int a = 1;
    int b = 0;
    int fib;
    while(numberFibonacci > k) {
        fib = a + b;
        b = a;
        a = fib;
        numberFibonacci--;
    }
    printf("fib N %d is %d\n", initial_fibonacci, fib);
    system("pause<nul");
}
