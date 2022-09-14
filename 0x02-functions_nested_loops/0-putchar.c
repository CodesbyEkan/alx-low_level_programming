#include "main.h"

/**
 * main - Entry point
 * Definition: Print _putchar in nested loop.
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != "\0"; i++)
	{
		_putchar(ch[i]);
	}

	_putchar('\n');
	return (0);
}
