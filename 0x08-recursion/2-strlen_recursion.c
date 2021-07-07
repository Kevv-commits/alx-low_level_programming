#include "holberton.h"

/**
 * _strlen_recursion - return string len
 * @s: input string
 *
 * Description: returns the length of a string
 * Return: returns string len
 */

int _strlen_recursion(char *s)
 {
	 int i = 0;

	 if (*s)
	 {
		 i++;
		 i += _strlen_recursion(s + 1);
	 }
	 return (i);
 }
