#include "main.h"

/**
 * main - print putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char p[] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++;)
	{
		_putchar(p[i]);
	}

	_putchar('\n');

	return (0);
}
