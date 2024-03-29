#include <stdio.h>
#include <string.h>

int main() {
	char *first_name = "John";
	char last_name[] = "Doe";
	char name[100];

	// Must use single quotes when dealing with individual characters
	last_name[0] = 'B';

	// Stores output of sprintf in name instead of printing to terminal
	sprintf(name, "%s %s", first_name, last_name);

	if (strncmp(name, "John Boe", 100) == 0) {
		printf("Done!\n");
	}

	name[0] = '\0';
	strncat(name, first_name, 5);
	strncat(name, last_name, 20);
	printf("%s\n", name);

	return 0;
}
