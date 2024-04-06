#include "main.h"

/**
 * print_exit_error - prints error messages and exits with exit value
 * @error: num is either exit value or file descriptor
 * @nameFile: str is a name, either of the two filenames
 * @fdValue: file descriptor
 *
 * Return: 0 on success
 **/

int print_exit_error(int error, char *nameFile, int fdValue)
{
	switch (error)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(error);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", nameFile);
		exit(error);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", nameFile);
		exit(error);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdValue);
		exit(error);
	default:
		return (0);
	}
}

/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 *
 * Return: 0 (success), 97-100 (exit value errors)
 */

int main(int argc, char *argv[])
{
	int fdValue_1, fdValue_2, n_read, n_wrote;
	char *buffer[1024];

	if (argc != 3)
		print_exit_error(97, NULL, 0);

	/*sets file descriptor for copy-to file*/
	fdValue_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fdValue_2 == -1)
		print_exit_error(99, argv[2], 0);

	/*sets file descriptor for copy-from file*/
	fdValue_1 = open(argv[1], O_RDONLY);
	if (fdValue_1 == -1)
		print_exit_error(98, argv[1], 0);

	/*reads original file as long as there's more than 0 to read*/
	/*copies/writes contents into new file */
	while ((n_read = read(fdValue_1, buffer, 1024)) != 0)
	{
		if (n_read == -1)
			print_exit_error(98, argv[1], 0);

		n_wrote = write(fdValue_2, buffer, n_read);
		if (n_wrote == -1)
			print_exit_error(99, argv[2], 0);
	}

	close(fdValue_2) == -1 ? (print_exit_error(100, NULL, fdValue_2)) : close(fdValue_2);
	close(fdValue_1) == -1 ? (print_exit_error(100, NULL, fdValue_1)) : close(fdValue_1);
	return (0);
}
