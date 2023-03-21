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
	int m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
	if (n > 5)
		printf("last digit of %d is %d and is greater than 5", n, m);
	else if (n == 0)
		printf("last digit of %d is %d and is zero", n, m);
	else if (m < 6 && m != 0)
		printf("last digit of %d is %d and is less than 6 and not zero", n, m);
	printf("\n");
	return (0);
}
