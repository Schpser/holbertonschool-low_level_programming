#include "main.h"
/**
 * _memcpy - Function that copy bytes from an area
 * @dest: Destination
 * @src: Source of bytes
 * @n: Number of bytes
 * Return: Success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
