# include <stdio.h>
# include <stdlib.h>
# include <time.h>
# pragma warning(disable : 4996)
int main(void)
{
	int  rows = 0, columns = 0, true_false = 1;
	//time_t start, end;
	double elapsed;
	
	//time(&start);
	do
	{
		elapsed = (double)clock();
		printf("Enter number of rows for the matrix (>=3 and <=10): ");
		scanf("%d", &columns);
		if (columns < 3 || columns > 10) {
			true_false = 0;
			printf("Invalid number of rows, acceptable is >=3 and <=10\n");
			//time(&end);
			//elapsed = clock(end, start);

			printf("Process returned 0 (0x0)    execution time : %.3f\n s", elapsed = ((double)clock() - elapsed)/1000);
		}
		else
		{
		    printf("Enter number of columns for the matrix (>=3 and <=10): ");
			scanf("%d", &rows);
			if (rows < 3 || rows > 10)
			{
				true_false = 0;
				printf("Invalid number of columns, acceptable is >=3 and <=10\n");
				//time(&end);
				//elapsed = clock(end, start);
				printf("Process returned 0 (0x0)    execution time : %.3f\n s", elapsed = ((double)clock() - elapsed)/1000);
			}
			else
			{
				true_false = 0;
				int Matrix[10][10] = { {0}, {0} };
				for (int i = 0; i < columns; i++)
				{
					for(int j = 0; j < rows; j++)
					{
						printf("Matrix[%d][%d]: ", i, j);
						scanf("%d", &Matrix[i][j]);
					}
				}
				printf("Matrix as given by you:\n");
				for (int i = 0; i < columns; i++)
				{
					for (int j = 0; j < rows; j++)
					{
						printf("\t%d", Matrix[i][j]);
					}
					printf("\n");
				}
				printf("\n\n\n");
				printf("Transpose of the given matrix:\n");
				for (int i = 0; i < rows; i++)
				{
					for (int j = 0; j < columns; j++)
					{
						printf("\t%d", Matrix[j][i]);
					}
					printf("\n");
				}

			}

		}
	} while (true_false);
	//time(&end);
	system("pause");
	return 0;
}
