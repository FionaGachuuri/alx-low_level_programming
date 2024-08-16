#include "main.h"

/**
  *main - entyr point.
  *@argc: argument count, number of arguments.
  *@argv: Array of arguments.
  *Return: 0 on success,error code on failure.
  */

int main(int argc, char *argv[])
{
	int file_from_fd, file_to_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from_fd = open(argv[1], O_RDONLY);
	if (file_from_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	file_to_fd = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, PERMISSIONS);
	if (file_to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(file_from_fd);
		exit(99);
	}

	while ((bytes_read = read(file_from_fd, buffer, BUFFER_SIZE) > 0))
	{
		bytes_written = write(file_to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can'twrite to %s\n", argv[2]);
			close(file_from_fd);
			close(file_to_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(file_from_fd);
		close(file_to_fd);
		exit(98);
	}

	if (close(file_from_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from_fd);
		close(file_to_fd);
		exit(100);
	}

	if (close(file_to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to_fd);
		exit(100);
	}

	return (0);
}
