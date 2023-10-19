#include "eyshell.h"

/**
 * deletee - handel comments
 * @x: string place
 *
 * Return: 0
 */
void deletee(char *x)
{
	int a;

	for (a = 0; x[a] != '\0'; a++)
		if (x[a] == '#' && (!a || x[a - 1] == ' '))
		{
			x[a] = '\0';
			break;
		}
}
