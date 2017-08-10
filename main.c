#include <stdio.h>
#include <stdbool.h>

#define SIZE 4

int main ()
{
  int prices[SIZE] = { 100, 200, 300, 400 };
  bool isTrue = true;
  bool isFalse = false;
  int i, k;

  printf ("%d\n", prices[0]);
  printf ("%d\n", prices[1]);
  printf ("%d\n", prices[2]);
  printf ("%d\n", prices[3]);

  // Пример булевой алгебры
  printf ("\nTrue: %d, False: %d\n", isTrue, isFalse);

  printf("\nWhile Loop:\n");

  // цикл while
  while(i < SIZE)
    {
      printf ("%d\n", prices[i]);
      i++;
    }

  printf("\nFor Loop:\n");

  // цикл for
  for(k = 0; k < SIZE; k++)
    {
      printf ("%d\n", prices[k]);

    }

  return 0;
}