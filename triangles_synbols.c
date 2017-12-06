#include <stdio.h>
#include <stdlib.h>

int main(void){
    int quize = 1, Q; //variables for menu
    int lines; //variables for program
    while (quize){
    /*Greeating users there*/    
        printf("\n\nChoose a \'Q\'!!! (Print 1...5 to Start, or 0 to Escape): ");
        scanf("%d", &Q);
        if ((Q==1)||(Q==2)||(Q==3)||(Q==4)||(Q==5)){
            //system("chcp 1251>nul"); //this line never works
            printf("How may lines: ");
            scanf("%d", &lines);
        
            /*(Q1)*/    
            if (Q==1){
                for (int i=0; i<lines; i++){
                    printf("\n");
                    for(int j=0; j<(lines-i); j++) printf("*");
                }
            } //End of Q1
        
            /*(Q2)*/
            else if (Q==2){
                for (int i=0; i<lines; i++){
                    printf("\n");
                    for (int j=0; j<=i; j++) printf("*");
                }//End of for 1
                for (int i=0; i<lines; i++){
                    printf("\n");
                    for (int j=0; j<(lines-i); j++) printf("*");
                }//End of for 2  
            }//End of Q2

            /*(Q3)*/
            else if (Q==3){
                for (int i=0; i<=lines; i++){
                    printf("\n");
                    for (int j=1; j<=i; j++) printf("%d  ", i);
                }//End of for 3 
            }//End of Q3
        
            /*(Q4)*/
            else if (Q==4){
                for (int i=0; i<=lines; i++){
                    printf("\n");
                    for (int j=1; j<=i; j++) printf("%d ", j);
                }//End of for 4
            }//End of Q4
        
            /*(Q55)*/
            else if (Q==5){
                for (int i=0; i<=lines; i++){
                    printf("\n");
                    for (int j=1; j<=i; j++) printf("%d ", (j + i)%2);
                }//End of for 5
            }//End of Q5
        

            /*Wrong input*/
            else printf("You input wrong number");
            //End
    
            //system("pause>nul"); //also never works
        } //global if end
        
        /*Alternative*/    
        else{
            /*End of a Quize*/
            if (Q==0) quize = 0;
            //End
            else  printf("You input wrong wrong number");
        }//global else end
        
    } //while
    
    printf("Goodbuy!"); //User input 0
    return 0;
}
