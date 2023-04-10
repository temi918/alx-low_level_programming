#include <sys/stat.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * create_file - A function that creates a file
 *
 * @filename: This is the filename to create
 *
 * @text: The string to write to the file
 *
 * Return: 1 if successful, else return -1
 *
 */

int create_file(const char *filename, char *text)
{
	int nut, vut, l = 0;

	if (filename == NULL)
		return (-1);

	nut = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (nut < 0)
		return (-1);

	while (text && *(text + l))
		l++;

	vut = write(nut, text, l);
	close(nut);
	if (vut < 0)
		return (-1);
	return (1);
}
