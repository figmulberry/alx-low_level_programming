#include "main.h"

/**
*_strlen - length of a string
*@s: A pointer to an int that will be changed/updated.
*
*Return: void meaning that answer is a success
*/

int _strlen(char *s)
{
int k;

k = 0;
while (s[k] != '\0')
{
k++;
}
return (k);
}
