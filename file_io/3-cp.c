#include "main.h"

/**
 * handle_errors - Handles file operation errors
 * @fd: File descriptor to close
 * @filename: Filename for error message
 * @error_code: Specific error code
 */

void handle_errors(int fd, const char *filename, int error_code)
{
	dprintf(STDERR_FILENO, "Error: Can't %s %s\n",
			error_code == 98 ? "read from file" : "write to", filename);
	if (fd != -1)
		close(fd);
	exit(error_code);
}

/**
 * copy_file - Copies content from one file to another
 * @file_from: Source file
 * @file_to: Destination file
 * Return: 0 on success
 */

int copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t bytes_read;
	char buffer[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		handle_errors(-1, file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, FILE_PERMS);
	if (fd_to == -1)
		handle_errors(fd_from, file_to, 99);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
		if (write(fd_to, buffer, bytes_read) != bytes_read)
			handle_errors(fd_from, file_to, 99);

	if (bytes_read == -1)
		handle_errors(fd_from, file_to, 98);

	if (close(fd_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}

	return (0);
}

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	return (copy_file(argv[1], argv[2]));
}
