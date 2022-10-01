#include <stdio.h>

/**
 * main - print the nmuber of arguments passed to it.
 * @argc: The nmuber of arguments supplied to the program.
 * @argv: An arrey of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
