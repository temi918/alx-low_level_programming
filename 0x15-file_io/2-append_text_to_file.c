#include <sys/stat.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - This function appends text at the end to the  file
 *
 * @filename: The filename to open and append in file
 *
 * @text: NULL terminated string to add
 *
 * Return: 1 if successful, else return -1
 *
 */

int append_text_to_file(const char *filename, char *text)
{
	int nut, vut = 0;
	int l = 0;

	if (filename == NULL)
		return (-1);

	nut = open(filename, O_RDWR | O_APPEND);

	if (nut < 0)
		return (-1);
	if (text == NULL)
	{
		close(nut);
		return (1);
	}

	while (*(text + l))
		l++;

	vut = write(nut, text, l);
	close(nut);
	if (vut < 0)
		return (-1);

	return (1);
}
