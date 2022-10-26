#include "main.h"

/**
  * print_most_numbers - prints numbers 0-9 without 2 and 4
  * Return: Always 0
  */
void print_most_numbers(void)
{
	int x = 0;

	while (x < 10)
	{
		if (x != 2 && x != 4)
			_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
