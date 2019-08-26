#include <stdio.h>
#include <stdint.h>

// Just typedef function pointers because fuck the other syntax
typedef void (*fn)(int);

void f1(int value) {
	printf("this is f1 and value is: %d\n", value);
}

void f2(int value) {
	printf("this is f2 and value is: %d\n", value);
}

void f3(int value) {
	printf("this is f3 and value is: %d\n", value);
}

int main() {

	// typedef that shit
	fn f[3] = { &f1, &f2, &f3 };

	for (uint32_t i = 0; i < 3; i++) {
		f[i](i);
	}

	return 0;
}
