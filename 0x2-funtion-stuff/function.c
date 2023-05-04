#include<stdio.h>
/**
 * 
 * main - this is the main
 * greeting - simply greet
 * Return: return 0
 */

void greeting() 
{
	printf("so delighted to be here\n");
}

void calcSqr(int num)
{
	int calc = num * num ;
	printf("the square root of  %d is %d\n", num , calc);
}

/* Function Declaration - function prototype */
int addTwo(int fnum, int lnum);

int main(void)
{
	int sumValue = addTwo(10,25);
	printf("programming is really interesting %d\n", sumValue);
	greeting();
	calcSqr(4);
	return(0);
}

/* Function Definition - function prototype */
int addTwo(int fnum, int lnum)
{
        int sum = fnum + lnum ;
        return sum;
}
