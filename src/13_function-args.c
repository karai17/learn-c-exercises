#include <stdio.h>
#include <stdint.h>

// [[ p-> ]] is syntactic sugar for [[ (*p). ]]

typedef struct {
	char*    name;
	uint32_t age;
} person;

void birthday(person *p) {
	p->age += 1; // (*p).age++
}

int main() {
	person john;
	john.name = "John";
	john.age  = 27;

	birthday(&john);
	printf("Happy Birthday! %s is now %d years old!\n", john.name, john.age);

	return 0;
}
