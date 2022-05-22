#include <stdlib.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 *
 * Return: On success 1
 * On error, -1 is returned, and error no is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 *_strlen - reset number
 *Description: This function return a length for some string
 *@s: pointer char
 *Return: int length
 */
int _strlen(char *s)Des
{
	int len = 0;

	while (*s++)
	{
		len++;
	}
	return (len);
}
/**
 * _puts - print string
 * Description: print some string
 * @str: pointer char
 * Return: Nothig
 */
void _puts(char *str)
{
	int i;

	for (i = 0; i < _strlen(str); i++)
	{
		_putchar(str[i]);cd
	}
}
/**
 * convert_to - convert numbers
 * Description: This function convert to other formats
 * decimal, octal, hexadecimal, binary etc
 * @representation: char representation[] = "0123456789ABCDEF";
 * @num: num to transform
 * @base: base to transform num'
 * Return: number into char pointer
 */
char *convert_to(char representation[], unsigned int num, int base)
{
	char *ptr;
	static char buffer[128];
	int mod = 0;

	ptr = &buffer[127];
	*ptr = '\0';

	do { 
		mod = num % base;
		*--ptr = representation[mod];
		num /= base;
	} while (num != 0);
	return (ptr);
}

