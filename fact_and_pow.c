#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int var_stat = 1;
    int var_menu;//variable for menu
    int number, fakt, i, p_o_w; //using in our calculations for facto
    //system("chcp 1251 > nul"); // it is does not works
    while (var_stat){  //var_stat = 1 - true
        printf("---- MENU ----\n1. Find factorial\n2. Find a^b\n3. Quit\n\n"); //main menu sillabus
        printf("What you want to do? ");
        scanf("%d", &var_menu);
        
        //starting conditions for factorial
        fakt = 1;
        i = 1;
        
        if (var_menu == 1){ //factorial finder
            printf("Enter number: ");
            scanf("%d", &number);

            if ((number>=0) && (number<=10)){
                while (i<=number){
                    fakt *= i;
                    ++i;
                }
                printf("Factorial of %d is %d\n\n", number, fakt);
            }
            else if (number > 10){
                printf("This program can find factorials only in the range 0 - 10\n\n");
            }
            else{
                printf("Invalid number for factorial\n\n");
            }
        }
        else if (var_menu == 2){ // power
            printf("Enter a: ");
            scanf("%d", &fakt);
            printf("Enter b: ");
            scanf("%d", &i);
            p_o_w = pow(fakt, i);
            printf("a^b: %d\n\n", p_o_w);
        }
        else if (var_menu == 3){ // exit
            printf("*** Thank you ***\n");\
            var_stat = 0;

        }
        else{ //invalid number
            printf("Invalid menu option\n\n");
        }
        
    }
            
    //system("pause > nul"); //also does not works
    return 0;
}
