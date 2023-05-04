#include <stdio.h>

/**
 *
 * main - the main
 * Return: returns 0
 */

int main(void)
{
  

  for(int i=0; i<=4; i++)
  {
    printf("STARTING of outer loop %d\n", i);
    for(int j=0; j<=4; j++)
    {
       printf("inner loop %d\n", j);
    }
    printf("ENDING of outer loop %d\n", i);
  }

  return(0);
}
