#include <stdio.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

/*
Number -> Number
Enter the number (number > 0 && number <= 10) than add integer from 0 to 10, and as a result number + 1 
check-expect as in current pdf
int func(void){
number
return number
}

*/

int main(void)
{

	int n;
	int mass[10] = { 0 };
	int digit;
	printf("Please note you can input at most 10 digit number\n");
	printf("What is the total number of digits in the number? ");
	scanf("%d", &n);
	if ((n<=10)&&(n>0))
	{
		for (int i = 0; i < n; i++)
		{
			printf("Input next digit: ");
			scanf("%d", &mass[(10-n)+i]);
		}
		printf("The number that you gave is: ");
		for (int i = 10 - n; i < 10; i++) 
		{
			printf("%d", mass[i]);
		}
		printf("\n");

		do 
		{
			printf("Enter a digit >=1 and <=9 to add: ");
			scanf("%d", &digit);
		} while ((digit <= 1) && (digit >= 9));

		mass[9] += digit;

		if (mass[9] >= 10)
		{
			mass[9] = mass[9] % 10;
			digit = 1;
			for (int i = 8; i >= 0; i--)
			{
				mass[i] = mass[i] + digit;
				if (mass[i] >= 10)
				{
					mass[i] = mass[i] % 10;

				}
				else
				{
					break;
				}

			}
		}
		printf("Result:\n");
		for (int i = 0; i < 10; i++)
		{
			printf("%d", mass[i]);
		}
		printf("\n");
	}
	else
	{
	printf("You input incorrect nubber\n");
	printf("Programm will be terminated\n");
	}
	system("pause");
	return 0;
