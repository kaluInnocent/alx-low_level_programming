#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

/**
* read_textfile - function reads a text file and prints it to the POSIX
* standard output
* @filename: The name of the file
* @letters: The number of letters it should read and print
* Return: Return 0 if file cannot be opened
* 0 if NULL
* 0 if write fails or does not write the expected amount of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *file;

	if (filename == NULL)
		return (0);

	file = malloc(sizeof(char) * letters);

	if (file == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, file, letters);
	wr = write(STDOUT_FILENO, file, rd);

	if (op == -1 || rd == -1 || wd == -1 || wd != rd)
	{
		free(file);
		return (0);
	}
	free(file);
	close(op);

	return (wd);
}
