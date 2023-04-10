#include <sys/stat.h>
#include <stdlib.h>
#include <sys/uio.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * read_textfile - A function that reads a text file & prints it to POSIX STANDARD OUTPUT
 *
 * @filename: Filename to open text
 *
 * @numOfLetters: The Number of letters it should read and print
 *
 * Return: The number of letters read and printed, or return 0.
 *
 */

ssize_t read_textfile(const char *filename, size_t numOfLetters)
{

	char *temp;
	int nut;
	int vut, jut;

	temp = malloc(sizeof(char) * numOfLetters);
	if (temp == NULL)
		return (0);

	if (filename == NULL)
		return (0);

	nut = open(filename, O_RDONLY);
	if (nut < 0)
	{
		free(temp);
		return (0);
	}

	vut = read(nut, temp, numOfLetters);
	if (vut < 0)
	{
		free(temp);
		return (0);
	}

	jut = write(STDOUT_FILENO, temp, vut);
	free(temp);
	close(nut);

	if (jut < 0)
		return (0);
	return ((ssize_t)jut);
}
