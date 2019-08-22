#include <stdio.h>
#include <stdint.h>

//  p is the value
// &p is the memory address (reference) of p
// *p interprets the value of p as a memory address and accesses (dereferences) the value thereof

int main() {

	// Creates an integer
	uint32_t n = 10;

	// Points to previously created integer
	uint32_t* p = &n;

	// Increment n
	*p += 1; // don't use ++ because it's stupid and ALSO due to operator precidence [(*p)++]

	printf("10 + 1 = %d\n", *p);

	return 0;
}
