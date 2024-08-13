#include "main.h"

/**
  *read_textfile -function that reads a text file and
  *prints it to the POSIX standard output.
  *@filename: pointer to a string representing the
  *name of the file to be read
  *@letters:  number of letters it should read and print
  *
  *Return:  actual number of letters it could read and print
  *if the file can not be opened or read, return 0
  *if filename is NULL return 0
  *if write fails or does not write the
  *expected amount of bytes, return 0
  */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1 || n_written != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);

	return (n_written);
}
