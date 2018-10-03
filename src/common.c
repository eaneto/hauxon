#include "common.h"

void *malloc_s(size_t size)
{
	if (!size)
		return NULL;

	void *mem;
	mem = malloc(size);

	if (!mem) {
		fprintf(stderr, "Fatal: memory exhausted (malloc of %zu bytes)\n", size);
		exit(EXIT_FAILURE);
	}

	return mem;
}
