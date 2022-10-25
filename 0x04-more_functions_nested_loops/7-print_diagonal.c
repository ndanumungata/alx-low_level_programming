#include "main.h"

/**
  * print_diagnol - drawn a diagnol line
  * @n: number of '\' to be printed
  */
void print_diagnol(int n)
{
	int x, y;

	if (n <= 0)
		_putchar('\n');

	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
			_putchar(' ');


		_putchar('\\');
		_putchar('\n');

	}
}
