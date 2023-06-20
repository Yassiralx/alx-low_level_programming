#include "main.h"

/**
 * main - Entry point
 *
 * Description: print the alphabet, in lowercase, followed by a new line
 *
 * Return: Always 0
 *
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n')
}
