#include <stdio.h>
#include <stdlib.h>
int main(void){
    // you need to input this
    signed int units;
    double bill_amount;  
    // you need to calculate this
    // prompt user to input unit consumed using printf and then
    // using scanf read the value into the unit variable.
    printf("****** Welcome to the ABC Power Supply Company *******\n");
    //system("chcp1251>null"); does't works
        printf("Input Unit Consumed: ");
        scanf("%d", &units);
    // Now, use if-elseif to decide about rate
	  if (units < 0){
         printf("Unit consumed cannot be negative\n");
         printf("\n");
         return main();
	  }
    else if (units >= 0 && units <= 100)
         bill_amount = units * .2;
	  else if (units>100 && units<=250)
         bill_amount = (units - 100) * .5 + 20;
	  else if (units>250 && units<=500)
	       bill_amount = (units - 250) * .75 + 95;
	  else 
         bill_amount = units - 500 + 282.5;
    // ** finally print the bill amount here, please note that if the unit consumed is
    // invalid that is negative then no bill should be printed. **
    printf("Total bill: $%.2f for %d units\n", bill_amount, units);
    printf("Thank you!");
	  return 0;
}
