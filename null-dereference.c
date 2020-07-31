#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

void target_func(const uint8_t *data, size_t size) {
	char *new_data;
	char *rep = (char*)data;
	char *rep2;

	new_data = &rep;
	new_data = NULL;
	rep2 = *new_data;
}

void main(int argc, char *argv[]) {
	printf("Main function")
}
