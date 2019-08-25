#include <stdio.h>
#include <stdint.h>

typedef union {
	uint32_t words[6];
	char     bytes[21];
} char_t;

int main() {

	// initializer lists like this are assigned to the first member of the union/struct!
	// There are 6 ints here so...
	char_t chars = {{ 1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0 }};

	printf("[");

	// print everything except the last because of the comma
	for(uint32_t i = 0; i < 19; i++) {
		printf("%c, ", chars.bytes[i]);
	}

	// print the last char manually
	printf("%c]\n", chars.bytes[19]);
	printf("%s\n", chars.bytes);

	return 0;
}
