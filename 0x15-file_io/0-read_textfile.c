#include "main.h"
#define SIZE 1024
/**
 * read_textfile - reads a text file and prints it
 * @filename: file to be read
 * @letters: number of characters to be read
 *
 * Return: number of characters to be read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t printed;
	int input;
	char *buff[SIZE];

	if (filename == NULL)
		return (0);

	input = open(filename, O_RDONLY);
	if (input == -1)
		return (0);

	printed = read(input, buff, letters);
	if (printed == -1)
		return (0);

	printed = write(STDOUT_FILENO, buff, printed);
	if (printed == -1)
		return (0);

	close(input);
	return (printed);
}
