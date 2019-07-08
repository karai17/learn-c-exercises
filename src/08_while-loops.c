#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t  array[] = { 1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4 };

	uint8_t i = 0;
	while (i < 10) {
		if (array[i] < 5) {
			i++;
			continue;
		}

		if (array[i] > 10) {
			break;
		}

		printf("%d\n", array[i]);
		i++;
	}

	return 0;
}
