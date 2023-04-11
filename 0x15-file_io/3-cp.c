#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/uio.h>

int safe_close(int);

/**
 * main - The main function to copy files
 *
 * @argc: Takes the number of argumentss passed
 *
 * @argv: The pointer to array arguments
 *
 * Return: returns 1 on success, else jsut exit
 *
 */

int main(int argc, char *argv[])
{
	char buf[1024];
	int byts_r = 0;
	int ENDOFFILE = 1;
	int fd = -1;
	int _fd = -1;
	int error = 0;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	_fd = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		safe_close(fd);
		exit(99);
	}

	while (ENDOFFILE)
	{
		ENDOFFILE = read(fd, buf, 1024);
		if (ENDOFFILE < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			safe_close(fd);
			safe_close(_fd);
			exit(98);
		}
		else if (ENDOFFILE == 0)
			break;
		byts_r += ENDOFFILE;
		error = write(_fd, buf, ENDOFFILE);
		if (error < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			safe_close(fd);
			safe_close(_fd);
			exit(99);
		}
	}
	error = safe_close(_fd);
	if (error < 0)
	{
		safe_close(fd);
		exit(100);
	}
	error = safe_close(fd);
	if (error < 0)
		exit(100);
	return (0);
}

int safe_close(int descr)
{
	int err_Msg;

	err_Msg = close(descr);
	if (err_Msg < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", descr);
	return (err_Msg);
}
