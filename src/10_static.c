#include <stdio.h>
#include <stdint.h>

uint32_t sum(uint32_t number) {
	static uint32_t total = 0;
	total += number;
	return total;
}

int main() {
	printf("%d ", sum(55));
	printf("%d ", sum(45));
	printf("%d ", sum(50));

	return 0;
}
