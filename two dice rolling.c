//Guess the number
#include <stdio.h> //for printf, scanf
#include <stdlib.h> //for srand() rand()
#include <time.h> // for timer

int main(void){
    int user_input, correct = 0, incorrect = 0, score = 0; //user input
    int dice_1, dice_2, dice_x2; //dice
    short generator_var, generator_mainloop = 1; // true or false in while loop
    printf("Computer rolled two dice... Guess the sum\n");

    do{ //main loop
        printf("Enter any 0<= value to terminate.\n");
        printf("Enter your guess: ");
        scanf("%d", &user_input);
        //printf("\n");
        if (user_input <= 0){
            generator_mainloop = 0; //end of the limb
        }
        
        else{
            // dice rolling in (range 1-6)
            srand(time(NULL)); //initialize rand function
            generator_var = 1;
            while (generator_var){
                dice_1 = rand() % 7; // range 0 - 6
                dice_2 = rand() % 7; // range 0 - 6
                if ((dice_1 > 0) && (dice_2 > 0)){
                    generator_var = 0; // range 1 - 6
                    dice_x2 = dice_1 + dice_2; //sum of two dices
                }
            }//end of rolling
 
        
            if (dice_x2 == user_input){
                printf("Bravo!!! You were correct +10\n");
                correct += 1;
                score += 10;
            } //end of if
            else{
                printf("Darh!!! Bad attempt, -5\n");
                printf("Sum was: %d\n", dice_x2);
                incorrect += 1;
                score -= 5;
                
                
            }// end of else

        } //end of else
        
        printf("\nTotal Correct: %d\n", correct);
        printf("Total Incorrect: %d\n", incorrect);
        printf("Score: %d\n\n", score);
        
    
    } while (generator_mainloop);
    printf("Thank you for playing...\n");
    return 0;
    
} //end of main
