#include <stdio.h>
/**
 * main - prints first 98 fibonacci numbers
 *starting with 1 and 2
 *followed by a new line
 * Return: 0
 */

int main(void)
{
	unsigned long i = 0, f1 = 1, f2 = 2, tmp;

	while (i < 94)
	{
		printf("%lu", f1);
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		if(i < 98)
		{
			printf(",  ");
		}
		i++;
	}
	while (i < 99)
	{
		printf("%lu", f1);
		tmp = f1 + f2;
		f1 = f2;
		f2 = tmp;
		if(i < 98)
		{
			printf(",  ");
		}
		i++;
	}

	printf("\n");
	return (0);
}
