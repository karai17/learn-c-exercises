#include <stdio.h>
#include <stdint.h>

void guess_number(uint32_t guess) {
	if (guess > 555) {
		printf("%d is too high!\n", guess);
	} else if (guess < 555) {
		printf("%d is too low!\n", guess);
	} else {
		printf("%d is correct!\n", guess);
	}
}

int main() {
	guess_number(500);
	guess_number(600);
	guess_number(555);

	return 0;
}
