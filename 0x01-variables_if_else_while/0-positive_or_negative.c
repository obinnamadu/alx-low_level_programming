#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - printing positive or negative
 * Return: Always 0 (Success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if n > 0;
		/*if this is true then print*/
	{
	printf("%d is positive\n", n);
	}
	if n == 0;
		/*if true, print*/
	{
	printf("%d is zero\n", n);
	}
	if n < 0;
		/*if true, print*/
	{
	printf("%d is negative\n", n);
	}
	return (0);
}
