#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i;
	int n;

	for (i = 48 ; i < 58 ; i++)
	{
		for (n = 48 ; n < 58 ; n++)
		{
			if (n > i)
			{
				putchar(i);
				putchar(n);
				if (i == 56 && n == 57)
				{
					break;
				}

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
