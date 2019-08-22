#include <stdio.h>
#include <stdint.h>

/*
	struct { int x; int y; } vec2; // self-instancing, one-off struct
	typedef FROM TO -> typedef struct {} TO -> typedef struct {} person
*/

typedef struct {
	char*    name;
	uint32_t age;
} person;

int main() {
	person john;
	john.name = "John";
	john.age  = 27;

	printf("%s is %d years old.\n", john.name, john.age);

	return 0;
}
