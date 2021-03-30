#include "holberton.h"
#include <stdio.h>

/**
 * main - copies the content of a file to another file.
 * @argc: argument counter.
 * @argv: argument vector.
 * Return: 1 on success, -1 on failure.
 */
int main(int argc, char *argv[])
{
	char buffer[1024]
	int fd_file_from, fd_file_to;

	/* check number of argument */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* create fd for file_from and check if it's readable */
	fd_file_from = open(argv[1], O_RDONLY);
	if (fd_file_from < 0)
	{
		// PRINT ERROR
		exit(98);
	}

	/* create fd for file_to and check */
	fd_file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_file_to < 0)
	{
		// PRINT ERROR
		exit(99);
	}

	while (end)
	{
		/* read the next 1020 bytes and check error reading */
		end = read(fd_file_from, buffer, 1024);
		if (end < 0)
		{
			read_error(argv[1]);
			close_fd(fd_file_from);
			close_fd(fd_file_to);
			exit(98);
		}
		/* check buffer end of file */
		if (end == 0)
			break;

		pichu += end;
		output = write(fd_file_to, buffer, end);
		if (output < 0) 
		{
			// PRINT ERROR
			exit(99);
		}
	}

	output = close_fd(fd_file_from);
	if (output < 0)
	{
		exit(100);
	}
	output = close_fd(fd_file_to);
	if (output < 0)
		exit(100);
	return (0);
}