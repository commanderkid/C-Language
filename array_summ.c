#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#pragma warning(disable : 4996)

int main(void) {
	int a, perem;
	float first[20] = { 0.0 };
	float second[20] = { 0.0 };
	float user_input = 0.0;
	float ar1 = 0, ar2 = 0;
	printf("Enter maximum 20 numbers, terminate with 0.0\n");
	printf("First number: ");
	scanf("%f", &user_input);

	for (int i = 0; i < 20; i++) {
		if (user_input == 0.0) {
			a = i;
			break;
		}
		else {
			first[i] = user_input;
			if (user_input < 0) {
				user_input = user_input * -1;
				perem = -1;
				}
			else {
				perem = 1;
			}
			second[i] = perem * ((i % 2) ? (pow(user_input, 1.0 / 3)) : (user_input * 2));
			printf("Next: ");
			scanf("%f", &user_input);
		}
	}
	printf("\nThere are in total %d numbers given as input\n", a);
	printf("\n");

	printf(" Input Array     2nd Array\n");

	for (int j = 0; j<a; j++) {
		printf("%10.5f\t", first[j]);
		printf("%10.5f\n", second[j]);
		ar1 += first[j];
		ar2 += second[j];
	}
	printf("\n\n");
	printf("Sum of the first array:     %.5f\n", ar1);
	printf("Sum of the second array:    %.5f\n", ar2);
	printf("\n");
	system("pause");
	return 0;
}
