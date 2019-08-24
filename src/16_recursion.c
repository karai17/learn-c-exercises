#include <stdio.h>
#include <stdint.h>

uint32_t factorial(uint32_t n) {
	if (n > 1) {
		return n * factorial(n-1);
	}

	return n;
}

int main() {
	printf("1! = %d\n", factorial(1));
	printf("3! = %d\n", factorial(3));
	printf("5! = %d\n", factorial(5));
	printf("7! = %d\n", factorial(7));
	printf("9! = %d\n", factorial(9));

	return 0;
}
