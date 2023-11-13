#include "main.h"
/**
 * ft_putstr - print a string to the console
 * @s: A pointer to the string to be printed
 *
 * Return: The number of characters printed
 */
char ft_putstr(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')

	{
		write(1, &s[i], 1);
		i++;
	}
	return (s[i]);
}
