#include <stdio.h>
#include "main.h"
/**
 * _islower - Entry point
 * @c: the character to check
 * Description: return 1 if lowercase, 0 otherwise
 * Return: 0 or 1
 */
int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
