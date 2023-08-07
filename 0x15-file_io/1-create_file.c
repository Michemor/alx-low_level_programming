#include "main.h"

/**
 * create_file - creates a file and adds string to it
 * @filename: pointer to file
 * @text_content: string to be added to filename
 *
 * Return: 1(on success) -1 (on failure)
 */
int create_file(const char *filename, char *text_content)
{
	int charRead, charWrite, out;

	if (filename == NULL)
		return (-1);

	out = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (out == -1)
		return (-1);

	if (text_content != NULL)
	{
		charRead = strlen(text_content);
		charWrite = write(out, text_content, charRead);
		if (charWrite == -1)
			return (-1);
	}

	close(out);
	return (1);
}
