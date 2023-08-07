#include "main.h"

/**
 * main - entry to the program
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 (success)
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	res = copy_files(av[1], av[2]);
	if (res == 98)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
	exit(98);
	}
	else if (res == 99)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
	exit(99);
	}
	else if (res == 100)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
	exit(100);
	}

	return (0);
}

/**
 * copy_files - copies one file to another
 * @file_f: source file
 * @file_t: destination file
 *
 * Return: 1 (successful)
 */
int copy_files(const char *file_f, const char *file_t)
{
	int foutput, finput;
	mode_t perm;
	char buf[SIZE];
	ssize_t chr;

	foutput = open(file_f, O_RDONLY);
	if (foutput == -1)
		return (98);

	perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	finput = open(file_t, O_RDWR | O_TRUNC | O_CREAT, perm);
	if (finput == -1)
	{
		close(foutput);
		close(finput);
		return (99);
	}
	while ((chr = read(foutput, buf, SIZE)) > 0)
	{
	if (write(finput, buf, chr) != chr)
	{
		close(finput);
		close(foutput);
		return (99);
	}
	}
	if (chr == -1)
	{
	close(finput);
	close(foutput);
		return (98);
	}
	if (close(foutput) == -1)
		return (close(finput));

	if (close(foutput) == -1)
		return (close(foutput));
	return (0);
}
