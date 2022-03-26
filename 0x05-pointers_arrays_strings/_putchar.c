#include <unistd.h>

/**
* _putchar - write character c to stdout
* @c:  The character to print
*
* Return: void is returned when successful
* On error, -1 is returned, and error is therefore returned
*/

int _putchar(char c)
{
return (write(1, &c, 1));
}
