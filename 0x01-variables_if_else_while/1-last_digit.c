#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *  main -  headers goes there *
 *
 *  Return: returns the zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);
}
