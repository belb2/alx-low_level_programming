#include <unistd.h>
#include "main.h"

/**
 * main - Check description
 * Description: It prints _putchar, followed by a new line.
 * Return: 0.
 */
int main(void)
{
	char x[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(x[i]);
	_putchar('\n');

	return (0);
}
