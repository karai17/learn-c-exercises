#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t average;
	uint8_t grades[10];

	grades[0] = 80;
	grades[1] = 85;
	grades[2] = 90;

	average = (grades[0] + grades[1] + grades[2]) / 3;
	printf("The average grade is: %d\n", average);

	return 0;
}
