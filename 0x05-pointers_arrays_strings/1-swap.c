#include "main.h"
/**
 * swap int - swap two numbers;
 * @a: first number
 * @b: second number
 * Return : (0)
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
