#include <stdio.h>

/**
 * main - main function that prints alphabet in lowecase except letter e and q
 *
 * Return: always 0
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
