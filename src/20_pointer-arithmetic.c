#include <stdio.h>
#include <stdint.h>

int main() {
	int n[5] = { 10, 20, 30, 40, 50 };
	int *m[3];
	int *pointer = &n[2]; // 30

	// Copy last three addresses of n into m
	// Use m and pointer
	for (uint32_t i = 0; i < 3; i++) {
		m[i] = &pointer[i]; // m[i] = pointer + i;
	}

	for (uint32_t i = 0; i < 3; i++) {
		if (m[i] == &pointer[i]) {
			printf("Matched!\n");
		} else {
			printf("Fail\n");
		}
	}

	return 0;
}
