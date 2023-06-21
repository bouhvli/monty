#include "main.h"
/**
 * _close_file - as the name says.
 * @file_disc: takes the file decriptor.
 */
void _close_file(FILE *file_disc)
{
	int val;

	val = fclose(file_disc);
	if (val == -1)
		exit(-1);
}
