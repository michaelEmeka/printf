#include <unistd.h>
/**
 * _putchar - this function prints a character
 * @c: character to be printed
 * Return: 1 on success, -1 on failure(with a suitable err no)
 */
int _putchar(char c)
{
	return (write(1, &c, 1);
}
