#include "main.h"

/**
 *_strlen - lenght of a string
 *@s: A pointer to an int that will be changed or updated
 *
 * Return: void that means the answer is correct
 */

int _strlen(char *s)
{
	int p;

	p = 0;
	while (s[p] != '\0')
	{
		p++;
	}

return (p);

}
