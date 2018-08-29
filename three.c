/* Create programm whitch create array and fills it by three in power of given n */

#include <stdio.h>
#include <stdlib.h>

int *summator(int);

void main(void)
{
  printf("This program fill massive of 3 with power of \n");
  printf("Enter the length of massive n: ");
  short N = 0;
  scanf("%d", &N);
  printf("\n-------------------\n");
  int *mas = summator(N);
  for (int i = 0; i < N; i++)
      printf("n: %d \t n^%d: %d\n", i, i, *(mas + i));
} 

int *summator(int x)
{
  int *bigarr = (int*)malloc(sizeof(int) * x);
  for(int i = 0; i < x; i++)
    *(bigarr + i) = (int)pow(3.0, (double)i);
  return bigarr;
}
