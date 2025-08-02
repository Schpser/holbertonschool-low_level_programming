#include "main.h"

/**
 * handle_error - Handles error messages and exits
 * @code: Error code
 * @msg: Error message
 * @arg: Additional argument for message
 * @fd: File descriptor to close if needed
 */
void handle_error(int code, const char *msg, const char *arg, int fd)
{
	dprintf(STDERR_FILENO, "Error: %s %s\n", msg, arg);
	if (fd != -1)
		close(fd);
	exit(code);
}

/**
 * copy_content - Copies content between file descriptors
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @filename: Destination filename for error messages
 */
void copy_content(int fd_from, int fd_to, const char *filename)
{
	char buffer[BUF_SIZE];
	ssize_t bytes;

	while ((bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
		if (write(fd_to, buffer, bytes) != bytes)
			handle_error(99, "Can't write to", filename, fd_from);

	if (bytes == -1)
		handle_error(98, "Can't read from file", filename, fd_from);
}

/**
 * main - Entry point for cp program
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		handle_error(98, "Can't read from file", argv[1], -1);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		handle_error(99, "Can't write to", argv[2], fd_from);

	copy_content(fd_from, fd_to, argv[2]);

	if (close(fd_from) == -1)
		handle_error(100, "Can't close fd", "", fd_from);

	if (close(fd_to) == -1)
		handle_error(100, "Can't close fd", "", fd_to);

	return (0);
}
