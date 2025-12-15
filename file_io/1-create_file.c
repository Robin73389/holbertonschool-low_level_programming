#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - This is the name for the function
 * @filename: This is the name for the file
 * @text_content: This is the content for the file
 * Return: (1)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	write(fd, text_content, strlen(text_content));

	close(fd);
	return (1);

}
