#include <stdio.h>
/**
 * main - Combination
 *
 * Return: 0
 */
int main(void)
{
	int a;
	int c;

	for (a = 48; a <= 56; a++)
	{
		for (c = 49; c <= 57; c++)
		{ 
			if (a > c)
			{
				putchar(a);
				putchar(c);
				if (a != 57 || c != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
