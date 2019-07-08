#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t  array[]   = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	uint32_t factorial = 1;
	uint8_t  i;

	uint8_t n = sizeof(array) / sizeof(array[0]);
	for (i = 0; i < n; i++) {
		factorial *= array[i];
	}

	printf("10! = %d.\n", factorial);

	return 0;
}
