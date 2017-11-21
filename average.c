/**
Instructions: 
Write a program that will input 3 integer values from user and then will 
display the average of them. You would require to declare 3 integer variables 
for holding the integers given by the users from keyboard and then you need 
another variable for holding the average. Decide by yourself about the datatype 
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main(void)
{
    int a;
     
    int b;
     
    int c;
     
    float u;

     
     
    printf("Enter first number: ");
     
    scanf("%d", &a);
     
    printf("Enter second number: ");
     
    scanf("%d", &b);
     
    printf("Enter second number: ");
     
    scanf("%d", &c);

     
     
    u = (float)(a + b + c) / 3;
  
   
     
    printf("Average is: %f", u);

     
     
    return 0;
}