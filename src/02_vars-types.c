#include <stdio.h>
#include <stdint.h>

int main() {
	int32_t a = 3;
	float   b = 5.5;
	double  c = 7.7;
	double  sum;

	sum = a + b + c;
	printf("The sum of a, b, and c is: %0.2f\n", sum);

	return 0;
}
