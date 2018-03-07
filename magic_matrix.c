#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#pragma warning(disable : 4996)

int main(void)
{
	int oddDimension = 0;
	int arrDD[15][15] = { { 0 },{ 0 } };
	int row = 0, column = 0;
	int start = 1;

	printf("Enter dimension of Magic Square (Only ODD dimension >=1 and <=15 accepted): ");
	scanf("%d", &oddDimension);
	if (oddDimension%2 != 0 && oddDimension >= 1 && oddDimension <= 15 )
	{
		printf("");
		row = oddDimension - 1;
		column = oddDimension / 2;
		for (int i = 1; i <= (int)pow((double)oddDimension, 2.0); ++i)
		{
			arrDD[row][column] = i;


			if (start == oddDimension) 
			{
				start = 1;
				row -= 1;
				if (row < 0)
				{
					row = oddDimension - 1;
				}
			}
			else
			{
				row += 1;
				column += 1;
				start += 1;
			}
			if (row > oddDimension - 1) row = 0;
			if (column > oddDimension - 1) column = 0;

		}
		start = 0;
		printf("The magic square are:\n\n");
		for (int i = 0; i < oddDimension; i++)
		{
			for (int j = 0; j < oddDimension; j++)
			{
				printf("\t%d", arrDD[i][j]);
			}
			printf("\n");
			start += arrDD[i][0];
		}
		printf("Magic square generated with dimension %d and magic constant: %d\n", oddDimension, start);
	}
	else
	{
		printf("Invalid input\n");
		printf("Valid values are odd integers between 1 and 15\n");
	}
	system("pause");
	return 0;
}
