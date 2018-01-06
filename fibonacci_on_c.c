#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    int fibonachi;
    int schetchik = 1, first_num = 1, dopol = 1;
    //system("chcp 1251>nul");
    printf("Wellcome to Fibonachi finder\nPlease ENTER the number of\nFibonachi you wish to find: ");
    scanf("%d", &fibonachi);
    
    while (schetchik != fibonachi){
        dopol = first_num - dopol;
        first_num = first_num + dopol;
        ++schetchik;
    }
    printf("\nThe Fibonaci number for %d is %d: \n", schetchik, first_num);
    
    //system("pause>nul");
    return 0;
}
