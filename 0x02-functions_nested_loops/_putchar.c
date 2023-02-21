#include "unistd.h"
/**
 * _putcher - write the character to stdout
 *@c: The Character to print
 * Return: Always 1 (Success)
 */
int _puthcer(char c)
{
	
	return (write(1, &c, 1));

}
