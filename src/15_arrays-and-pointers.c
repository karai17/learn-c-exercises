#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

int main() {

	// Double star for double array syntax
	// Use one less level of indirection for sizeof (if your pointer is 2+ stars, use 1 star. if 1 star, use no stars)
	uint32_t **p = calloc(sizeof(uint32_t*), 3);

	p[0] = calloc(sizeof(uint32_t), 1);
	p[1] = calloc(sizeof(uint32_t), 2);
	p[2] = calloc(sizeof(uint32_t), 3);

	p[0][0] = 1;
	p[1][0] = 1;
	p[1][1] = 1;
	p[2][0] = 1;
	p[2][1] = 2;
	p[2][2] = 1;

	for (uint32_t i = 0; i < 3; i++) {
		for (uint32_t k = 0; k <= i; k++) {
			printf("%d", p[i][k]);
		}

		printf("\n");
	}

	for (uint32_t i = 0; i < 3; i++) {
		free(p[i]);
	}

	free(p);

	return 0;
}
