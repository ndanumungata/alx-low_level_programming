#include <unistd.h>
#include "main.h"

/**
  * _putchar - writes the character c to std output
  * @c: The character to rint
  * Return: On success 1 else -1
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
