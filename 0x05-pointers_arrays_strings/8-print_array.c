#include "main.h"
#include <stdio.h>

/**
  * print_array - prints n elemens of arrays
  * @a: array
  * @n: number of values yo be printed
  */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		printf("%d", a[t]);
		if (t != n - 1)
			print(", ");
	}
	printf("\n")
}
