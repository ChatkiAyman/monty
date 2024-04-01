#include "monty.h"
/**
 * file_open -  open file
 * @filename: file name
 * Return: FILE
 */
FILE *file_open(char *filename)
{
	FILE *mfile;

	mfile = fopen(filename, "r");
	if (!mfile)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		exit(EXIT_FAILURE);
	}
	return (mfile);
}
