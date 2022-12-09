#include <stdio.h>
/**
 * main - Hexadecimal
 *
 * Return: 0
 */
int main(void)
{
	int a;
	char q;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
	}
	for (q = 'a'; a <= 'f'; q++)
	{
		putchar(q);
	}
	putchar('\n');
	return (0);
}
