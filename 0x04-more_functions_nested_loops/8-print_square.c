#include "main.h"
/**
 * print_square - print a square of # character
 *
 * @size: the size of the square
 *
 * return: void
 */
void print_square(int size)
{
	int length, width;

	if (size <= 0)
		_putchar('\n');

	for (length = 0; length < size; length++)
	{
		for (width = 0; width < size; width++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
