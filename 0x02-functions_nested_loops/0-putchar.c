#include "_purchar.h"
/**
* main - prints _purchar
*
* Description: prints _purchar
*
* Return: 0 (Success)
*/

int main(void)
{
char text[10] = "_purchar";
int i = 0;

for (i = 0; i < 9; i++)
{
_putchar(text[i]);
}
_putchar('\n');

return (0);
}
