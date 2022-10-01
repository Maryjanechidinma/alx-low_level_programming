#include <stdio.h>

/**
 * main - print all arguments it receives.
 * @argc: The nmuber of arguments supplied to the program
 * @argv: An array of pointers to the arguments.
 *
 * Return: always 0.
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
	{
		printf("%s\n", argv[arg]);
	}
	return (0);
}
