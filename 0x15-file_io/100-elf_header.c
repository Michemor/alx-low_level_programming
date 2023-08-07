#include "main.h"

/**
 * main - entry point of the program
 * @ac: argument count
 * @av: argument vactor
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 2)
	{
	fprintf(stderr, "Only 2 arguments required\n");
	exit(98);
	}

	res = read_elf_header(av[1]);

	if (res == 98)
		exit(98);
	return (0);
}

/**
 * read_elf_header - reads header file from a programs elf file
 * @file: pointer to file to be read
 *
 * Return: 0 if successful
 */
int read_elf_header(const char *file)
{
	int fd;

	fd = open(file, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Failure in openning file\n");
		return (98);
	}
	return (0);
}

