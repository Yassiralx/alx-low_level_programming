#include "main.h"
/**
 * main - Entry point
 *
 * Description: print the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
