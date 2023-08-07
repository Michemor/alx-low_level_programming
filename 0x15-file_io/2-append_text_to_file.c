#include "main.h"

/**
 * append_text_to_file - writes to the end of the file
 * @filename: pointer to file to be written to
 * @text_content: pointer to string to write
 *
 * Return: 1 (on success) -1 (on failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int out, charRead, charWrite;

	if (filename == NULL || text_content == NULL)
		return (-1);

	out = open(filename, O_RDWR | O_APPEND);
	if (out == -1)
		return (-1);

	charRead = strlen(text_content);
	charWrite = write(out, text_content, charRead);
	if (charWrite == -1)
		return (-1);

	close(out);
	return (1);
}
