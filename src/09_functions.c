#include <stdio.h>
#include <stdint.h>

// prototypes tho
void print_big(uint8_t number);

int main() {
	uint8_t array[] = { 1, 11, 2, 22, 3, 33 };
	uint8_t i;

	for (i = 0; i < 6; i++) {
		print_big(array[i]);
	}

	return 0;
}

void print_big(uint8_t number) {
	if (number > 10) {
		printf("%d is big! o///o\n", number);
	}
}
