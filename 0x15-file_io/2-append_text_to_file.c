#include "main.h"

/**
  *append_text_to_file - function that appends
  *text at the end of a file.
  *@filename: pointer to the filename
  *@text_content: pointer to the string to
  *add at the end of the file
  *
  *Return: 1 on success, and -1 on fail
  */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length = 0;
	int write_result;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	write_result = write(fd, text_content, length);

	if (fd == -1 || write_result == -1)
	{
		return (-1);
	}
	close(fd);

	return (1);
}
