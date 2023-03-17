#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Prints the last digit of a randomly generated
 * number and whether it is greater than 5, less than 6 or 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastNum;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
       lastNum = n % 10;

	if (lastNum > 5)
		printf("%s %d is %d and is greater than 5\n", str, n, lastNum);
	else if (lastNum == 0)
		printf("%s %d is %d and is 0\n", str, n, lastNum);
	else (lastNum < 6)
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lastNum);

	return (0);
}
