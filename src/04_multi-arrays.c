#include <stdio.h>
#include <stdint.h>

int main() {
	float average;
	uint8_t grades[2][5];

	// sizeof counts bytes, divide by bytes per cell to get number of cells
	size_t  n = sizeof(grades)    / sizeof(grades[0]);
	size_t  m = sizeof(grades[0]) / sizeof(grades[0][0]);

	grades[0][0] = 80;
	grades[0][1] = 70;
	grades[0][2] = 65;
	grades[0][3] = 89;
	grades[0][4] = 90;

	grades[1][0] = 85;
	grades[1][1] = 80;
	grades[1][2] = 80;
	grades[1][3] = 82;
	grades[1][4] = 87;


	for (uint32_t i = 0; i < n; i++) {
		uint32_t k = 0;
		average    = 0;

		for (k = 0; k < m; k++) {
			average += grades[i][k];
		}

		average /= k;
		printf("The average grade for subject %d is: %0.2f\n", i, average);
	}

	return 0;
}
