#include "main.h"

/**
  *create_file - function that creates a file.
  *@filename: pointer to the string of the
  *name of the file to be created
  *@text_content: NULL terminated string to write to e file
  *
  *Return: 1 on success,
  *-1 on failure (file can not be created,
  *file can not be written, write “fails”, etc…)
  *if filename is NULL return -1
  *if text_content is NULL create an empty file
  */

int create_file(const char *filename, char *text_content)
{
	int fd, length = 0, result;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
		result = write(fd, text_content, length);
		if (result == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);

}
