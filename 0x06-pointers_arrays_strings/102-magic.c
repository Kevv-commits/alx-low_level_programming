#include <stdio.h>

/**
 * Main: Add one line to code
 * prints a[2] = 98
 * followed by a new line.
 * Returns: Always 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;

	/*
	 * write your line of code here...
	 * Remember you are:
	 * - Not allowed to use a
	 * - Not allowed to modify p
	 * - To use just one statement
	 * - Not allowed to code anything else than this line of code
	 */

	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
