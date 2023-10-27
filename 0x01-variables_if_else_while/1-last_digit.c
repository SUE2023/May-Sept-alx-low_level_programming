#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{

  int n, m;

  srand(time(0));
  n = rand() - RAND_MAX / 2;

  /* Code that run and reminder is zero */

  n = m % 10;

  printf("The last digit of the number %d is %d \n", n, m);

  return (0);
}
