#include <stdio.h>

/**
 *main - program execution begins here
 *
 *Description
 *Return: 0 (Successful)
 */
int main(void)
{
	char letter;

	letter = 'a';

	while (letter <= 'z')
	{
		if ((letter == 'e') || (letter == 'q'))
		{
			letter++;
		}
		else
		{
			putchar(letter);
			letter++;
		}
	}
	putchar('\n');

	return (0);
}
