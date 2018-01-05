//Thernary operator

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int number;
    //system("chcp 1251>0");
    printf("Input number: ");
    scanf("%d", &number);
    printf(number%2 ? "odd\n" : "even\n");
    //system("pause>0");
}


/*#include <stdio.h>
#include <stdlib.h>

int main(void){
    //system("chcp 1251>null");
    int number;
    printf("Введите целое число: ");
    scanf("%d", &number);
    if(number % 2 == 0){
        printf("Четное число!\n");
    }
    else{
        printf("Нечетное число!\n");
    }
    //system("pause>null");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>

int main(void){
    system("chcp 1251>0");
    int number;
    printf("Введите число!: \n");
    scanf("%d", &number);
    
    if (number%2 == 0) printf("even\n");
    if (number%2 == 1) printf("odd\n");
    
    scanf("pause>0");
    return 0;
}
*/
