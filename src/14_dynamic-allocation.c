#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct {
	float x;
	float y;
} point;

int main() {
	point *p = calloc(sizeof(point), 1);
	p->x = 10.0f;
	p->y = 5.0f;

	printf("Coordinate location: %f,%f\n", p->x, p->y);

	free(p);

	return 0;
}
