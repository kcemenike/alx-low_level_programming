#include <stdio.h>

/**
 *main - program execution begins here
 *
 *Description
 *Return: 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar('0' + num);
	}
	putchar('\n');

	return (0);
}
