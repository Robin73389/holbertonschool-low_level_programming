#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - This is the name for the function
 *
 * @filename: This is the pointer towards the name the file
 * @letters: This is the letters for the file
 * Return: (total)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t total;
	int fd;
	char *buffer;
	ssize_t n;

	buffer = malloc(letters);

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	while ((n = read(fd, buffer, letters)) > 0)
	{
		if (write(1, buffer, n) != n)
		{
			close(fd);
			return (0);
		}
		total += n;
	}
	close(fd);
	return (total);
}
